---
name: 课程任务
about: 教师发布知识点学习和 Lab 编程任务
title: "[Task] "
labels: task
assignees: ""
---

## 学习单元

- 关联知识点：
- Lab：
- 预计用时：

## 目标

完成后，你应该能够：

- <!-- 填写目标 -->

## 学习材料

- 仓库文档：
- 相关代码或示例：

## 任务

- [ ] <!-- 填写具体任务 -->

## 输入与输出

- 输入：
- 输出：
- [ ] <!-- 填写具体任务 -->
- [ ] <!-- 填写具体任务 -->

## 完成标准

- [ ] 满足所有功能要求
- [ ] 程序可以编译和运行
- [ ] 能解释自己的实现
- [ ] 已按要求提交 PR

## Git 与 GitHub 操作教程

发布任务前，教师必须将本节中的占位符替换为本任务的具体值。

- 任务分支：`task/<Issue编号>-<简短名称>`
- 允许提交的文件：`<本任务文件路径>`
- 建议提交信息：`<本任务提交信息>`

### 1. 拉取最新的 main 并创建任务分支

先确认工作区没有尚未保存的修改。如果 `git status` 显示有修改，先询问老师，不要直接删除或覆盖。

```bash
git status
git switch main
git pull --ff-only origin main
git switch -c task/<Issue编号>-<简短名称>
```

### 2. 执行任务并验证

按照本 Issue 的任务要求修改代码，再执行“验证方式”中的全部命令。不要提交 `build/`、`.o`、`.exe` 或其他编译产物。

### 3. 在本地提交代码

只暂存本任务允许提交的文件，不使用 `git add .`。

```bash
git status --short
git add <本任务文件路径>
git diff --cached
git commit -m "<本任务提交信息>"
```

### 4. 推送分支并在 GitHub 发起 PR

```bash
git push -u origin task/<Issue编号>-<简短名称>
```

1. 打开 [仓库页面](https://github.com/izumiChan16/marslab-c-course)，点击 **Compare & pull request**。如果没有该按钮，进入 **Pull requests**，点击 **New pull request**。
2. 确认 `base` 是 `main`，`compare` 是 `task/<Issue编号>-<简短名称>`。
3. 按 PR 模板填写完成内容、验证结果和 AI 使用情况，并在“关联任务”中填写 `Closes #<Issue编号>`。
4. 点击 **Create pull request**。Review 要求修改时，继续在同一分支提交并执行 `git push`，原 PR 会自动更新。

### 5. PR 合并后删除本地分支并清理缓存

只有 GitHub 上的 PR 已显示 **Merged**，并且老师已经删除远端任务分支后，才执行以下命令。不要自行删除 GitHub 上的远端分支。

```bash
git switch main
git pull --ff-only origin main
git branch -d task/<Issue编号>-<简短名称>
git fetch origin --prune
rm -rf build/
git status
```

如果 PR 采用 squash merge，`git branch -d` 可能拒绝删除。先确认 PR 已合并且成果已经出现在最新的 `main`；确认无误后才可以执行：

```bash
git branch -D task/<Issue编号>-<简短名称>
```

如果 PR 被关闭但没有合并，不要强制删除本地分支，先询问老师。

## 遇到问题时

- 简单问题可以直接询问老师；需要持续跟踪时再创建“学习问题” Issue。
- 我希望发生什么：
- 实际发生什么：
- 我已经尝试：
