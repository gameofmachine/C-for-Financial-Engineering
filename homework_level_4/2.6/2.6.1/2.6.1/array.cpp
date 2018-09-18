#include "array.h"

namespace XIANGZOU
{
	namespace Containers
	{
		Array::Array()
		{
			m_size = 10;
			m_data = new CAD::Point[m_size];
		}

		Array::Array(int size)
		{
			m_size = size;
			m_data = new CAD::Point[m_size];
		}

		Array::Array(const Array & a)
		{
			m_size = a.m_size;
			m_data = new CAD::Point[m_size];
			for (int i = 0; i < m_size; ++i)
			{
				m_data[i] = a.m_data[i];
			}

		}

		Array::~Array()
		{
			delete[] m_data;
			cout << "bye Array~" << endl;
		}

		Array Array::operator=(const Array & source)
		{
			if (this != &source)
			{
				delete[]m_data;
				m_size = source.m_size;
				m_data = new CAD::Point[m_size];
				for (int i = 0; i < m_size; ++i)
				{
					m_data[i] = source.m_data[i];
				}
				return *this;
			}
			else
				return *this;
		}

		int Array::Size()
		{
			return m_size;
		}

		void Array::SetElement(int index, const CAD::Point& np)
		{
			if (index >= m_size || index < 0)
			{
				return;
			}
			else
				m_data[index] = np;
		}

		CAD::Point & Array::GetElement(int index)
		{
			if (index >= m_size || index < 0)
			{
				return m_data[0];
			}
			else
				return m_data[index];

		}

		CAD::Point & Array::operator[](int index)
		{
			if (index >= m_size || index < 0)
			{
				return m_data[0];
			}
			else
				return m_data[index];
		}

		const CAD::Point & Array::operator[](int index) const
			//To make sure the function can only read, not write.
			//and to make the array object const
		{
			if (index >= m_size || index < 0)
			{
				return m_data[0];
			}
			else
				return m_data[index];
		}
	}
}
