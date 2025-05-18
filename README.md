# Preorder-Morris-Traversal

# 🌲 Morris Preorder Traversal — O(1) Space | Binary Tree 💻

Welcome to the land of stackless and recursion-free traversal! 🚀  
This project implements **Morris Preorder Traversal** for binary trees, enabling traversal using **O(1) space** by cleverly modifying the tree structure temporarily.

---

## 📌 What is Preorder Traversal?

Preorder traversal follows this pattern:

Root ➝ Left ➝ Right


---

## 💡 What is Morris Traversal?

Morris Traversal avoids extra space by:
- Temporarily modifying the binary tree (threaded binary tree concept)
- Restoring the original structure after traversal
- Using no recursion or auxiliary stack

---

## 🛠️ Algorithm Overview

1. While current node is not `nullptr`:
   - If there’s no left child:
     - Visit the node.
     - Move to the right.
   - Else:
     - Find the **inorder predecessor** (rightmost node in the left subtree).
     - If predecessor's right is `nullptr`:
       - Make it point to the current node.
       - **Visit current node** (for preorder).
       - Move to the left child.
     - If predecessor's right is current:
       - Remove the thread.
       - Move to the right child.

---

## 🧠 Example

```cpp
  1
 / \
2   3

🔁 Preorder: [1, 2, 4, 3]

```


---

## 🧮 Time & Space Complexity

| Complexity | Value |
|------------|-------|
| Time       | O(n)  |
| Space      | O(1)  | ✅ (No recursion, no stack)

---

## ✍️ Author

**Ridham Garg**  
Thapar Institute of Engineering and Technology

Helping trees stay space-efficient since now! 😄

---

## 🧾 Topics Covered

- Binary Trees 🌳
- Tree Traversal 🔁
- Preorder Traversal 🧭
- Morris Traversal 💡
- Space Optimization 🧠

---

🌟 Star this repo if you found it helpful!  
Happy Coding! 💻✨



