#include "CommonC.hpp"
#include <amp.h>
#include <amp_math.h>

using namespace std;
using namespace concurrency;

CommonC::CommonC()
{
	m_a.resize(YHL_SIZE);
	m_b.resize(YHL_SIZE);
	m_c.resize(YHL_SIZE);
	vector<accelerator> accels = accelerator::get_all();
	for (size_t i = 0; i < accels.size(); i++)
	{
		std::wprintf(accels[i].get_description().data());
		printf("\r\n");
	}
}

CommonC::~CommonC()
{

}

void CommonC::gen_amp()
{
    array_view<double, 1> a(YHL_SIZE, m_a.data());
    array_view<double, 1> b(YHL_SIZE, m_b.data());
    array_view<double, 1> c(YHL_SIZE, m_c.data());
    //a.discard_data();
    //b.discard_data();
    //c.discard_data();
    parallel_for_each(
        c.extent, [=](index<1> idx) restrict(amp) {
		using namespace concurrency::fast_math;
		for (int j = 0; j < UINT16_MAX; j++)
		{
			a[idx] = 1.0;
			b[idx] = 2.0;
			c[idx] = pow(pow(sin(a[idx]) * cos(b[idx]), 2), 0.5);
		}
        });
	c.synchronize();
}

void CommonC::gen_cpu()
{
    for (int i = 0; i < YHL_SIZE;i++)
    {
		for (int j = 0; j < UINT16_MAX; j++)
		{
			m_a[i] = 1.0;
			m_b[i] = 2.0;
			m_c[i] = pow(pow(sin(m_a[i]) * cos(m_b[i]), 2), 0.5);
		}
    }
}

void CommonC::gen_omp()
{
    #pragma omp parallel for
    for (int i = 0; i < YHL_SIZE; i++)
    {
        m_a[i] = 1.0;
        m_b[i] = 2.0;
        m_c[i] = m_a[i] * m_b[i];
    }
}
