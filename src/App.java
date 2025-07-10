// -------------------------------------------------------------------------------
// App.java -  The App class serves as the entry point for the application. When
// the user launches the program—whether by double-clicking an icon or running it
// from the command line—the system needs a defined starting point. This class
// provides that by containing the main method.
//
// The main method is where execution begins, initializing necessary components and
// setting the application into motion. It ensures that the first frame, user
// interface, and core functionality are properly instantiated.
//
// In a structured software environment, every project needs a single place where
// the system knows to start. This class fulfills that role, keeping the application
// streamlined and predictable across multiple use cases.
// -------------------------------------------------------------------------------
// Author:  Patrik Eigemann
// eMail:   p.eigenmann@gmx.net
// GitHub:  www.github.com/PatrikEigemann/Tone3
// -------------------------------------------------------------------------------
// Change Log:
// Wed 2025-06-30 File created and launched MainFrame.              Version: 00.01
// ------------------------------------------------------------------------------- */
/* Java Swing imports */
import javax.swing.*;

/* Tone3 relevant imports */
import Tone3.Gui.MainFrame;

/**
 * App.java -  The App class serves as the entry point for the application. When
 * the user launches the program—whether by double-clicking an icon or running it
 * from the command line—the system needs a defined starting point. This class
 * provides that by containing the main method.
 * 
 * The main method is where execution begins, initializing necessary components and
 * setting the application into motion. It ensures that the first frame, user
 * interface, and core functionality are properly instantiated.
 *
 * In a structured software environment, every project needs a single place where
 * the system knows to start. This class fulfills that role, keeping the application
 * streamlined and predictable across multiple use cases. 
 */
public class App {

    /**
     * The main method acts as the starting point of the application. When the program
     * is launched, execution begins here, ensuring that all necessary components are
     * initialized and the user interface is displayed.
     *
     * This method is responsible for setting the application in motion. It ensures
     * that the primary frame is created and rendered within the correct thread
     * context to maintain responsiveness and stability.
     *
     * In structured software design, having a clearly defined entry point allows for
     * predictable execution, making the application easy to manage and extend.
     *
     * @param args Command-line arguments passed during application startup.
     *             These can be used for configuration or debugging but are
     *             typically not required in standard executions.
     */
    public static void main(String[] args) {
        /* 
         * Launch the application on the Event Dispatch Thread.
         * Ensures all Swing components are created and updated safely.
         */
        SwingUtilities.invokeLater(() -> new MainFrame());
    }
}