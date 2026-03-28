# How to Run the Project

This project simulates a browser's back and forward navigation using the **Two Stacks** data structure in C++.

---

## 🛑 0. Prerequisites & Installation

Before running the project, you need a C++ compiler installed on your system.

### For Mac:
1.  Open **Terminal**.
2.  Install Xcode Command Line Tools by running:
    ```bash
    xcode-select --install
    ```

### For Windows:
- **Option 1 (Recommended)**: Install [MinGW-w64](https://www.mingw-w64.org/) (via MSYS2) to get the `g++` compiler.
- **Option 2**: Install [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/) and include the "Desktop development with C++" workload.

### For Linux:
1.  Open your terminal.
2.  Install the `build-essential` package:
    ```bash
    sudo apt update && sudo apt install build-essential
    ```

---

## 1. Compilation

### For Mac and Linux:
1.  Open your **Terminal**.
2.  Navigate to the project folder.
3.  Run the following command:
    ```bash
    g++ -o browser_manager main.cpp
    ```

### For Windows:

#### Option A: Using g++ (MinGW)
1.  Open **Command Prompt** (cmd) or **PowerShell**.
2.  Run the following command:
    ```bash
    g++ -o browser_manager.exe main.cpp
    ```

#### Option B: Using Microsoft Visual C++ (cl.exe)
1.  Open **Developer Command Prompt for VS**.
2.  Run:
    ```cmd
    cl main.cpp
    ```

---
## 4. Using VS Code (Recommended for Beginners)

If you prefer using **Visual Studio Code**, follow these steps:

1.  **Install VS Code**: Download from [code.visualstudio.com](https://code.visualstudio.com/).
2.  **Install C++ Extension**: Open the Extensions view (`Ctrl+Shift+X`) and search for **"C/C++"** (by Microsoft). Click Install.
3.  **Open Project**: Open the folder containing `main.cpp` in VS Code.
4.  **Run the Code**:
    *   Open `main.cpp`.
    *   Click the **Play button** (Triangle icon) in the top-right corner.
    *   Select **"C/C++: g++.exe build and debug active file"** (or similar for your OS).
5.  The integrated terminal will open, and you can start using the Browser History Manager!

## 2. Execution

### For Mac/Linux:
```bash
./browser_manager
```

### For Windows:
```bash
browser_manager.exe
```

---

## 3. How to Use the Menu
Once the program is running, you'll see an interactive menu:
1.  **Visit New Page**: Type a URL to go to a new website.
2.  **Go Back**: Go to the previous website in history.
3.  **Go Forward**: Go to the next website in history.
4.  **Show Status**: View current page and history sizes.
5.  **Clear History**: Wipe all back and forward data.
6.  **Exit**: Close the program.
