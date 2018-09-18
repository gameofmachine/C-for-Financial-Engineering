#pragma once
#ifndef FUNCTIONOBJECT_H
#define FUNCTIONOBJECT_H

template<typename T>
class FunctionObject
{
private:
	double limit;
public:
	FunctionObject();
	FunctionObject(const T& t);
	FunctionObject(const FunctionObject& copy);
	~FunctionObject();

	FunctionObject<T>& operator=(const FunctionObject<T>& source);

	bool operator()(const T& t) const;
};
#endif // !FUNCTIONOBJECT_H

template<typename T>
inline FunctionObject<T>::FunctionObject()
{
}

template<typename T>
inline FunctionObject<T>::FunctionObject(const T& t):limit(t)
{

}

template<typename T>
inline FunctionObject<T>::FunctionObject(const FunctionObject& copy):limit(copy)
{
}

template<typename T>
inline FunctionObject<T>::~FunctionObject()
{
}

template<typename T>
inline FunctionObject<T>& FunctionObject<T>::operator=(const FunctionObject<T>& source)
{
	if (this != source)
	{
		limit = source.limit;
		return *this;
	}
	return *this;
}
template<typename T>
inline bool FunctionObject<T>::operator()(const T & t) const
{
	return t < limit;
}
