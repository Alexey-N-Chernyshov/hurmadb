/* vim: set ai et ts=4 sw=4: */

#pragma once

#include <string>

class Storage {
public:
    virtual void set(const std::string& key, const std::string& value) = 0;
    virtual std::string get(const std::string& key, bool* found) = 0;
    virtual std::string get(const std::string& key);
    virtual void del(const std::string& key, bool* found) = 0;
    virtual void del(const std::string& key);
};
