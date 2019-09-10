
/* Copyright © 2019 Jordan Irwin (AntumDeluge) <antumdeluge@gmail.com>
 *
 * This file is part of the bin2header project & is distributed under the
 * terms of the MIT/X11 license. See: LICENSE.txt
 */

#ifndef PATHS_H_
#define PATHS_H_

#include <string>


extern std::string NormalizePath(std::string path);

extern std::string JoinPath(std::string a, std::string b);

extern std::string GetBaseName(std::string f);

extern std::string GetDirName(std::string f);


#endif /* PATHS_H_ */
