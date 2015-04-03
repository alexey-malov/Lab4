#pragma once
#include "Solidbody.h"

class CSphere : public CSolidBody
{
public:
	CSphere(double radius);
	~CSphere(void);

	double GetRadius() const;
	// ������, ���������������� ������ ������� �������, ������������� 
	// ��������� �� �������������� override
	double GetVolume() const override;

private:
	double m_radius;
};

