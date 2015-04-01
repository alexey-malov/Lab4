#pragma once
#include "body.h"

class CSphere : public CBody
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

