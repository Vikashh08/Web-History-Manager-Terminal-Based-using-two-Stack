# How to Run the Project

This project simulates a browser's back and forward navigation using the **Two Stacks** data structure in C++.

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
