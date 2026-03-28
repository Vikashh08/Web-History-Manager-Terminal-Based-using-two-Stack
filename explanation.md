# How the Browser History Manager Works (Simple Explanation)

Imagine you have two empty buckets: one for **Back** and one for **Forward**.

### 1. The Setup
```cpp
stack<string> backHistory;    // Our "Back" bucket
stack<string> forwardHistory; // Our "Forward" bucket
string currentUrl;            // The page we are looking at right now
```
We use "stacks" because they work like a stack of pancakes. You always add to the top and take from the top.

---

### 2. Starting Up
```cpp
currentUrl = "homepage";
```
When we start, we are at the "homepage". The buckets are empty.

---

### 3. Visiting a New Page (`visit`)
```cpp
backHistory.push(currentUrl); // Put the old page in the "Back" bucket
currentUrl = url;             // Jump to the new page
// (The forward bucket is emptied here because we can't go forward into a new future!)
```
When you go to a new website:
1. You take the page you were just looking at and drop it into the **Back** bucket.
2. You look at the new page.
3. You throw away anything in the **Forward** bucket because you just took a new path!

---

### 4. Going Back (`back`)
```cpp
forwardHistory.push(currentUrl); // Put the current page in the "Forward" bucket
currentUrl = backHistory.top();  // Take the top page from the "Back" bucket
backHistory.pop();               // Remove it from the bucket
```
When you hit the "Back" button:
1. You take the page you are on and move it to the **Forward** bucket (just in case you want to come back).
2. You grab the top page from the **Back** bucket and look at it.

---

### 5. Going Forward (`forward`)
```cpp
backHistory.push(currentUrl);    // Put current page in the "Back" bucket
currentUrl = forwardHistory.top(); // Grab the top page from "Forward" bucket
forwardHistory.pop();              // Remove it from the bucket
```
When you hit the "Forward" button:
1. You take the current page and put it in the **Back** bucket.
2. You grab the page you previously came back from from the **Forward** bucket.

---

### 6. Clearing Everything (`clearHistory`)
```cpp
while (!backHistory.empty()) { backHistory.pop(); }
while (!forwardHistory.empty()) { forwardHistory.pop(); }
```
This is like dumping both buckets onto the floor until they are completely empty! You stay on your current page, but you forget where you came from.

---

### Summary
- **Stack** = A stack of plates. Last one put on is the first one taken off.
- **Push** = Putting a plate on top.
- **Pop** = Taking the top plate off.
- **Top** = Looking at the plate on top without moving it.
