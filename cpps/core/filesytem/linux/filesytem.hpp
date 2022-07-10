#include <iostream>
#include <vector>
#include <dirent.h>
#include <filesystem>

namespace fileSystem {
    std::string cwd = "/";

    std::vector<std::string> ls() {
        std::vector<std::string> returnValue;

        DIR *dir;
        struct dirent *ent;

        int strToPassLen = cwd.length() + 1;

        char strToPass[strToPassLen];

        for (int i = 0; strToPassLen > i; i++) {
            strToPass[i] = cwd.c_str()[i];
        }

        const char* strToPassPtr {strToPass};

        if ((dir = opendir(strToPassPtr)) != NULL) {
            while ((ent = readdir(dir)) != NULL) {
                returnValue.push_back(ent->d_name);
            }

            closedir(dir);

            delete strToPassPtr;
            return returnValue;
        } else {
            delete strToPassPtr;
            return returnValue;
        }
    }

    void cd(std::string DirToCd) {
        DIR *dir;

        int strToPassLen = DirToCd.length() + 1;

        char strToPass[strToPassLen];

        for (int i = 0; strToPassLen > i; i++) {
            strToPass[i] = DirToCd.c_str()[i];
        }

        const char* strToPassPtr {strToPass};

        if ((dir = opendir(strToPassPtr)) != NULL) {
            cwd = DirToCd;
        }
    }

    std::string get_cwd() {
        return cwd;
    }
};