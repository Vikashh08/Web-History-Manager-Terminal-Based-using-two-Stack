# 🌐 Browser History Manager (Two Stacks)

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white) 
![DSA](https://img.shields.io/badge/Data%20Structures-Stacks-orange?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

A powerful, efficient, and terminal-based simulation of a browser's back and forward navigation using the **Two Stacks** data structure.

---

## 🚀 Features

- **📍 Real-time Tracking**: Keeps track of your current "website" URL.
- **⬅️ Back Navigation**: Uses a stack to remember where you came from.
- **➡️ Forward Navigation**: Uses a stack to remember where you went back from.
- **✨ Clear History**: Wipe all history instantly while staying on the current page.
- **🖥️ Cross-Platform**: Works seamlessly on **Windows**, **macOS**, and **Linux**.

---

## 🛠️ How It Works (The Logic)

The project uses two stacks to manage history:
1.  **Back Stack**: Stores URLs you have visited previously.
2.  **Forward Stack**: Stores URLs you have gone "Back" from.

> [!TIP]
> This is exactly how real browsers like Chrome or Firefox manage your navigation history!

---

## 📖 Documentation

- [**Line-by-Line Explanation**](explanation.md) - Learn how the code works with simple analogies.
- [**Run Instructions**](run_instructions.md) - Step-by-step guide to compile and run.

---

## 🚦 Quick Start

### 🏁 Prerequisites
- A C++ compiler (like `g++` or `MSVC`)

### 🏃 Run the Project
1.  **Compile**:
    ```bash
    g++ -o browser_manager main.cpp
    ```
2.  **Execute**:
    ```bash
    ./browser_manager
    ```

---

## 🤝 Contributing

Feel free to fork this project and add features like **URL search** or **Persistence (Saving history to a file)**!

---

## 📝 License

Distributed under the MIT License. See `LICENSE` for more information (if applicable).
