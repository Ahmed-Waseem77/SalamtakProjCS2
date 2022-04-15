/**
 * Project Untitled
 */


#ifndef _USER_PROFILE_H
#define _USER_PROFILE_H

class User_profile {
public: 
    void Attribute1;
    
void signup();
    
void contact_us();
private: 
    string email;
    string password;
    
/**
 * @param u
 * @param p
 */
bool login(username u, password p);
};

#endif //_USER_PROFILE_H