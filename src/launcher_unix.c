// ----------------------------------------------------------------------------------------------
// A launcher is a small wrapper program that a non native application with a native launcher.
// It is used to start the application in a way that is compatible with the system's environment.
// ----------------------------------------------------------------------------------------------
// Author:  Patrik Eigenmann
// eMail:   p.eigenmann@gmx.net
// GitHub:  www.github.com/PatrikEigenmann/Tone3
// ----------------------------------------------------------------------------------------------
// Change Log:
// 2025-06-30 Mon Initial creation of the launcher in C.                            Version 00.01
// ----------------------------------------------------------------------------------------------
#include <unistd.h>
#include <limits.h>
#include <libgen.h>
#include <stdlib.h>
#include <stdio.h>

// The main function serves as the entry point for the launcher application. Please make sure
// that a Java Runtime Environment (JRE) or Java Development Kit (JDK) from Oracle or OpenJDK
// Version 17 or later is installed on your system and the classpath is set correctly. Also
// ensure that your system will be able to find the bytecode interpreter java, else that could
// lead to unexpected behavior or errors when trying to run the JAR file.
// 
// @param argc - The number of command-line arguments passed to the program.
// @param argv - An array of strings representing the command-line arguments.
// @return Returns 0 on success, or a non-zero value on failure.
int main(int argc, char *argv[]) {
    char resolved[PATH_MAX];

    // Resolve the full, canonical path to this executable
    if (realpath(argv[0], resolved) == NULL) {
        perror("Failed to resolve executable path");
        return 1;
    }

    // Extract the directory component (where this binary lives)
    char *dir = dirname(resolved);

    // Build the command to launch the adjacent JAR
    char command[PATH_MAX + 64];
    snprintf(command, sizeof(command), "java -jar \"%s/Tone3.jar\"", dir);

    // Execute the Java command
    return system(command);
}