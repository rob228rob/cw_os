#ifndef MATH_PRACTICE_AND_OPERATING_SYSTEMS_ASSOCIATIVE_CONTAINER_H
#define MATH_PRACTICE_AND_OPERATING_SYSTEMS_ASSOCIATIVE_CONTAINER_H

#include <iostream>
#include <vector>

template<
    typename tkey,
    typename tvalue>
class associative_container
{

public:
    
    struct key_value_pair final
    {
    
    public:
        
        tkey key;
        tvalue value;

    public:
	key_value_pair() = default;

	key_value_pair(const tkey &key_, const tvalue &value_) : key(key_), value(value_)
	{

	}
	key_value_pair(const key_value_pair& other) = default;

	key_value_pair(key_value_pair&& other) noexcept = default;

	key_value_pair& operator=(const key_value_pair& other) = default;

	key_value_pair& operator=(key_value_pair&& other) noexcept = default;

	~key_value_pair() = default;
        
    };
    
    struct key_value_ptr_pair
    {
    
    public:
        
        tkey key;
        tvalue *value_ptr;
        
    };

public:
    
    // TODO
    struct associative_container_iterator
    {
    
    public:
    
    };

public:
    
    virtual ~associative_container() noexcept = default;

public:
    
    virtual void insert(
        tkey const &key,
        tvalue const &value) = 0;
    
    virtual void insert(
        tkey const &key,
        tvalue &&value) = 0;
    
    virtual tvalue const &obtain(
        tkey const &key) = 0;
    
    virtual tvalue dispose(
        tkey const &key) = 0;
    
};

#endif //MATH_PRACTICE_AND_OPERATING_SYSTEMS_ASSOCIATIVE_CONTAINER_H