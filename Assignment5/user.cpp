#include "user.h"
#include<iostream>

/**
 * Creates a new User with the given name and no friends.
 */
User::User(const std::string& name)
  : _name(name)
  , _friends(nullptr)
  , _size(0)
  , _capacity(0)
{
}

/**
 * Adds a friend to this User's list of friends.
 * @param name The name of the friend to add.
 */
void
User::add_friend(const std::string& name)
{
  if (_size == _capacity) {
    _capacity = 2 * _capacity + 1;
    std::string* newFriends = new std::string[_capacity];
    for (size_t i = 0; i < _size; ++i) {
      newFriends[i] = _friends[i];
    }
    delete[] _friends;
    _friends = newFriends;
  }

  _friends[_size++] = name;
}

/**
 * Returns the name of this User.
 */
std::string
User::get_name() const
{
  return _name;
}

/**
 * Returns the number of friends this User has.
 */
size_t
User::size() const
{
  return _size;
}

/**
 * Sets the friend at the given index to the given name.
 * @param index The index of the friend to set.
 * @param name The name to set the friend to.
 */
void User::set_friend(size_t index, const std::string& name)
{
  _friends[index] = name;
}

/** 
 * STUDENT TODO:
 * The definitions for your custom operators and special member functions will go here!
 */
size_t User::get_capacity()const{
  return _capacity;
}
std::string* User::get_friends()const{
  return _friends;
}

std::ostream& operator<<(std::ostream& os, const User& user){
    os<<"User(name="<<user.get_name()<<", friends=[";
    std::string* frs=user.get_friends();
    for(size_t i=0;i<user.size();i++){
      if(i!=user.size()-1) os<<frs[i]<<", ";
      else os<<frs[i];
    }
    os<<"])";
    return os;
}


User::User(const User& user):_name(user.get_name()),_size(user.size()),_capacity(user.get_capacity()),_friends(new std::string[user.get_capacity()]){
  std::string* frs=user.get_friends();
  for(size_t i=0;i<user.size();i++){
    _friends[i]=frs[i];
  }
}
User& User::operator=(const User& user){
  if(this!=&user){
    _name=user.get_name();
    _size=user.size();
    _capacity=user.get_capacity();
    delete[] _friends;
    std::string* frs=user.get_friends();
    _friends=new std::string[_capacity];
    for(size_t i=0;i<user.size();i++){
      _friends[i]=frs[i];
    }
  }
  return *this;
}
User::~User(){
  delete[] _friends;
}
User& User::operator+=(User& rhs){
    add_friend(rhs.get_name());
    rhs.add_friend(get_name());
    return *this;
}
bool User::operator<(const User& rhs) const{
  return _name<rhs.get_name();
}
