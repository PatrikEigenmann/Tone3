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
#include <stdlib.h>

// The main function serves as the entry point for the launcher application. Please make sure
// that a Java Runtime Environment (JRE) or Java Development Kit (JDK) from Oracle or OpenJDK
// Version 17 or later is installed on your system and the classpath is set correctly. Also
// ensure that your system will be able to find the bytecode interpreter java, else that could
// lead to unexpected behavior or errors when trying to run the JAR file.
int main() {
    
    // Launch the JAR using the default Java runtime
    system("java -jar Tone3.jar");
    
    // Ending the main function with a return code of 0 indicates that the program has
    // executed successfully without any errors. This is a common practice in C programming.
    return 0;
}