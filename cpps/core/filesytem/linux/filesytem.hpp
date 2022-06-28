#include <iostream>
#include <vector>
#include <dirent.h>
#include <filesystem>

namespace fileSystem {
    std::vector<std::string> ls() {
        std::vector<std::string> returnValue;

        DIR *dir;
        struct dirent *ent;

        if ((dir = opendir("/")) != NULL) {
            while ((ent = readdir(dir)) != NULL) {
                returnValue.push_back(ent->d_name);
            }

            closedir(dir);

            return returnValue;
        } else {
            return returnValue;
        }
    }

};