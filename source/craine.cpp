#include <iostream>
#include <string>       // required for std::string
#include <cstring>      // required for strcmp
using namespace std;


int makes(char* params2) {
    cout << "make distro" << params2 << std::endl;
    return 0;
}


int build(char* params2) {
    cout << "build iso" << params2 << std::endl;
    return 0;
}


int main(int argc, char* argv[]) {

    // Check if any argument other than the program name was provided
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <command> [options]" << std::endl;
        std::cout << "Commands: run, help" << std::endl;
        return 1; // Exit if no arguments
    }

    // convert the first argument to string
    std::string params1 = argv[1];

    // convert command params argument to string
    char* params2 = argv[2];

    if (params1 == "--makes" ) {
       makes(params2);
    }

    if (params1 == "--build" ) {
       build(params2);
    }



    return 0;
}