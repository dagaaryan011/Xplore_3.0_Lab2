# Contributing to the Workshop Repo — Beginner's Guide

## Step 1: Fork the Repository

Forking creates your own copy of the repo under your GitHub account.

1. Go to the workshop repository link shared by your instructor
2. Click the **Fork** button (top right corner)
3. GitHub will create a copy at `github.com/YOUR_USERNAME/repo-name`

---

## Step 2: Clone Your Fork Locally

Cloning downloads the repo to your computer so you can work on it.

```bash
git clone https://github.com/YOUR_USERNAME/repo-name.git
cd repo-name
```

---

## Step 3: Create a New Branch

Never work directly on `main`. Create a branch for your changes.

```bash
git checkout -b your-name-contribution
```

Example: `git checkout - aryan_daga`

---

## Step 4: Make Your Changes

Add your file or edit what's needed. For example, creating a file:

```bash
touch  kachao.py
```

---

## Step 5: Stage and Commit

```bash
git add .
git commit -m "Solved w"
```

> A good commit message is short and describes **what** you did.
## Good vs Bad Commit Messages

| Bad | Good |
|---|---|
| `fixed stuff` | `Fix: resolve merge conflict in index.md` |
| `asdfgh` | `Add: Readme , API_setup.py` |
| `changes` | `Update: correct typo in README` |
| `idk` | `Remove: delete duplicate entry in contributors list` |
| `final` | `Docs: add setup instructions to README` |
| `last commit i promise` | `Fix: remove console.log statements` |
| `okay THIS is the last one` | `Fix: actually fix the bug this time` |
| `solved world hunger` | `Add: working login form validation` |
| `why is nothing working???` | `Debug: investigate auth token expiry issue` |
| `last ver 1.23.45 FINAL FINAL` | `Release: v1.2.0 stable` |
| `my code works dont touch` | `Refactor: clean up redundant functions` |
| `god please let this work` | `Fix: correct API endpoint URL` |

>  A good commit message completes the sentence: **"If applied, this commit will..."**
> - "If applied, this commit will **Add readme file**"
> - "If applied, this commit will **solved world hunger**"

>  If your commit message is a cry for help, it's time to rethink it.
---

## Step 6: Push to Your Fork

```bash
git push origin your-name-contribution
```

---

## Step 7: Open a Pull Request (PR)

1. Go to your forked repo on GitHub
2. You'll see a **"Compare & pull request"** button — click it
3. Add a short title and description of what you did
4. Click **"Create Pull Request"**

The workshop organizer will review and merge it! 

---

## Quick Reference

| Command | What it does |
|---|---|
| `git clone <url>` | Download the repo |
| `git checkout -b <name>` | Create a new branch |
| `git add .` | Stage all changes |
| `git commit -m "message"` | Save a snapshot |
| `git push origin <branch>` | Upload to GitHub |

---

##  Common Mistakes to Avoid

- Don't push directly to `main`
- Don't forget to branch before making changes
- Always pull the latest changes if working over multiple days:

```bash
git pull upstream main
```

---

## Made with ❤️ by Project X 
---

### Season Dos



You have already forked this repository and been assigned a **personal branch** (named after you). All future work must be submitted to that branch. **Do not fork the repository again.**

Your branch name is the same branch you used for your previous submission.
---

### Step 1 — Sync Your Fork on GitHub

Before starting any new work, make sure your fork is up to date with the main repository.

1. Go to **your fork** on GitHub (e.g. `github.com/your-username/repo-name`)
2. Click the **"Sync fork"** button near the top of the file list
3. Click **"Update branch"** to confirm

---

### Step 2 — Pull the Updated Main Branch Locally

Open your terminal inside your local project folder and run:

```bash
git checkout main
git pull origin main
```

---

### Step 3 — Switch to Your Assigned Branch

Replace `your-name` with your actual assigned branch name:

```bash
git checkout your-name
```

> **Not sure of your branch name?** Run `git branch -a` to list all available branches.

---

### Step 4 — Merge Main into Your Branch

This keeps your branch up to date before you add new work:

```bash
git merge main
```

Resolve any conflicts if prompted, then continue.

---

### Step 5 — Add, Commit, and Push Your Work

Once you've completed an exercise or made changes:

```bash
git add .
git commit -m "Add: brief description of your work"
git push origin your-name
```

---

### Step 6 — Open a Pull Request

1. Go to **your fork** on GitHub
2. Click **"Compare & pull request"**
3. Ensure:
   - **Base repository** → original workshop repository
   - **Base branch** → your assigned branch (`your-name`)
   - **Compare branch** → your branch from your fork
4. Click **"Create pull request"**

---

### ⚠️ Important Reminders

- 🚫 **Do NOT open a Pull Request into `main`**
- 🚫 **Do NOT create new branches**
- ✅ **Always push to and PR into your own assigned branch**

If you're unsure which branch is yours, check with your instructor before submitting.