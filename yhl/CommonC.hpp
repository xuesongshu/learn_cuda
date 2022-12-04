#ifndef COMMONC_H
#define COMMONC_H

#pragma once
#include <stdint.h>
#include <vector>

#define YHL_SIZE 16771632

class CommonC
{
public:
    CommonC();
    ~CommonC();

public:
    void gen_amp();
    void gen_cpu();
    void gen_omp();

private:
	std::vector<double> m_a;
	std::vector<double> m_b;
	std::vector<double> m_c;
};

#endif