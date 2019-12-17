## C++ Environments in Windows
- git           //for source control
- cmake         //To work with project
- g++(mingw)    //compiler for windows. You need to update binary path to system env. variables
-github.com // for cloud service


## Terminal Commands 
Note: ($ means terminal prompt):
```bash
$   ls          # list folder 
$ cd  <dest>  	# change directories
$ cd   ..		# .. parent directory 
$ pwd           # show present working directory
$ rm <name>     # remove/delete file/directory
```
## File System
``` bash
.    # (one dot) present working directory
..   # (two dots) parent directory
```
## C++ Basics
- File extension: `.cpp`




## g++ Compiler
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

### C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{

    return 0;
}
```

## Doxygen documentation
```cpp
// Add C/C++ Intellisence
// Add code Spell Extension
// Add the plug in to VSCode: Doxygen Documentation Generator
// Run /** and <Enter>

### Cmake
To build a project we need all of the rules to be set under 'CmakeList.txt' file.
-Create a folder '$ mkdri build'
- Go to the build dir : '$ cd build'
'..' is for a build that is folder above.
-Run cmake: '$ cmake .. -G "MinGW Makefiles"'
-Build or compile you code: '$ cmake --build .'