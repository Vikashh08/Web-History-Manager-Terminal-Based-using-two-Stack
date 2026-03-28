# Simple Line-by-Line Explanation

Imagine you have two empty buckets: one for **Back** and one for **Forward**. 

---

### The Data Structure
```cpp
stack<string> backHistory;    // Our "Back" bucket
stack<string> forwardHistory; // Our "Forward" bucket
string currentUrl;            // The page we are looking at right now
```
> **Analogy**: Think of a stack like a **Stack of Pancakes**. You always add to the top and take from the top.

---

### 1. Visiting a New Page (`visit`)
When you go to a new website:
1.  **Save the Past**: You take the page you were just looking at and drop it into the **Back** bucket.
2.  **Update**: You look at the new page.
3.  **Reset Future**: You throw away anything in the **Forward** bucket because you just took a new path!

```cpp
backHistory.push(currentUrl); // Save current to back
currentUrl = url;             // Move to new URL
```

---

### 2. Going Back (`back`)
When you hit the "Back" button:
1.  **Save the Current**: You move the current page to the **Forward** bucket.
2.  **Restore the Past**: You grab the top page from the **Back** bucket and look at it.

```cpp
forwardHistory.push(currentUrl); // Save to forward
currentUrl = backHistory.top();  // Get from back
backHistory.pop();               // Remove from bucket
```

---

### 3. Going Forward (`forward`)
When you hit the "Forward" button:
1.  **Save the Current**: Move the current page to the **Back** bucket.
2.  **Restore the Future**: Grab the top page from the **Forward** bucket.

```cpp
backHistory.push(currentUrl);    // Save to back
currentUrl = forwardHistory.top(); // Get from forward
forwardHistory.pop();              // Remove from bucket
```

---

### 4. Clearing Everything (`clearHistory`)
This is like dumping both buckets onto the floor until they are completely empty! 

```cpp
while (!backHistory.empty()) { backHistory.pop(); }
while (!forwardHistory.empty()) { forwardHistory.pop(); }
```

> [!NOTE]
> You stay on your current page, but the browser "forgets" where you came from.
