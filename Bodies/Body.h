#pragma once
class CBody
{
public:
	CBody(void);
	// � ������� ������ ���������� ������� ������ �����������
	virtual ~CBody(void);

	virtual double GetVolume() const = 0;
};

