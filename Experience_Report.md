# Experience Report

## Overview

This document summarizes my experience while working on the **DevSecOps Lab / Sorting Algorithms C++ project**, focusing on my role, technical contributions, challenges faced, and key learnings related to GitHub workflows and collaborative development.

---

## Roles, and Contributions

This project was developed collaboratively by a **group of 5 members**, where each member was responsible for implementing **one sorting algorithm**. The work was later integrated into a single, menu-driven C++ application.

### Team Roles

* Each team member independently implemented a specific sorting algorithm
* Responsibilities were divided to encourage ownership and parallel development
* Code was reviewed and merged collaboratively using GitHub

---

## Challenges Faced

### 1. Merge Conflicts & Git History Issues

* Faced **unrelated histories** error due to branches being created independently
* Encountered **non-fast-forward push rejections** when pushing rewritten branch history
* Learned safe usage of `git reset`, `git rebase`, and `--force-with-lease`

### 2. Code Integration Problems

* Function signature mismatches (e.g., incorrect parameters in `MergeSort` and `quickSort` calls)
* Variable naming errors causing compilation issues (e.g., using undeclared temporary vectors)
* Handling in-place sorting versus returning new arrays

---

## Insights Gained

### GitHub Workflows

* Importance of always creating branches **from `main`**
* Understanding fast-forward vs non-fast-forward merges
* When and where force-push is acceptable (feature branches only)
* How GitHub Pull Requests rely on **shared commit history**, not just file differences

### Team & Collaboration Dynamics

* Clear commit messages improve collaboration and review
* Documentation is as important as code for team understanding
* Early syncing with remote repositories avoids major conflicts later

---

## Suggestions for Improvement

### Project-Level Improvements

* Add automated test cases for sorting validation
* Display time and space complexity comparisons at runtime

### Workflow Improvements

* Enforce branch naming conventions (e.g., `feature/`, `fix/`)
* Protect the `main` branch to prevent force pushes
* Use Pull Request templates for consistency

---

## Conclusion

This project provided strong hands-on experience with **C++ programming**, **data structures**, and **real-world GitHub workflows**. Beyond algorithms, it helped build confidence in handling version control issues, debugging integration problems, and maintaining professional documentation standards.

Overall, it was a valuable learning experience that strengthened both **technical** and **collaborative development skills**.
