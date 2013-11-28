#ifndef __SINGLETON_H__
#define __SINGLETON_H__

template <class T>
class Singleton
{
public:
	static inline T* instance();
	void release();
protected:
	Singleton(void){}
	~Singleton(void){}
	static T* _instance;
};

template <class T>
inline T* Singleton<T>::instance()
{
	if(!_instance)
		_instance = new T;
	return _instance;
}

template <class T>
void Singleton<T>::release()
{
	if (!_instance)
		return;
	delete _instance;
	_instance = 0;
}

#define DECLARE_SINGLETON_MEMBER(_Ty)	\
	template <> _Ty* Singleton<_Ty>::_instance = NULL;

#endif//__SINGLETON_H__
