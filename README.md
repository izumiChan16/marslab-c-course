# MarsLab C Course

MarsLab C Course 是一个通过知识学习、独立 Lab 和代码 Review 推进的 C 语言自学仓库。MarsLab 目前只是候选项目方向；完成前几个 Lab 后，再根据学习兴趣决定长期项目。

课程没有固定周数、复杂解锁状态机或单独的 Git/能力检查节点。

## 课程资料与平台分工

- [Notion：C语言与 Git 自学课程｜MarsLab](https://app.notion.com/p/izxmi/C-Git-MarsLab-39f1d100ccaf81c693c6d6c2c408276d)
- [Notion：课程节点｜知识点、Lab 与项目](https://app.notion.com/p/39f1d100ccaf81008b3dc58882d3f195)
- Notion 保存知识点、Lab、项目方向、学习材料和课程规则。
- GitHub 保存任务 Issue、学生代码、PR、Review 和测试记录。

Notion 回答“学什么和为什么”；GitHub 回答“这次具体做什么，以及是否完成”。

## 课程结构

- **知识点**：需要理解的概念，只在 Notion 维护，不单独创建 Issue。
- **Lab**：组合多个知识点完成的小程序，是主要的掌握证据。
- **项目**：持续演进的程序，方向在完成前几个 Lab 后决定。

通常由教师发布一个任务 Issue，组合 2～4 个知识点和 1 个 Lab。学生完成 Lab、解释代码并根据 Review 修改后，该 Issue 即完成。

## Issue 的用途

- 大部分 Issue 由教师用于发布课程任务，使用 `task` 标签。
- 简单问题直接询问老师，不需要创建 Issue。
- 只有问题需要异步跟踪、保留复现过程或后续回看时，才创建 `question` Issue。
- 知识点本身不创建 Issue；项目方向确定前也不预先拆分项目任务。

## 完成任务 Issue

1. 阅读教师发布的任务 Issue 和其中链接的 Notion 知识点、Lab。

2. 从最新的 `main` 创建任务分支。下面以 Issue `#12` 为例：

   ```bash
   git switch main
   git pull --ff-only
   git switch -c task/12-unit-converter
   ```

3. 完成代码并检查改动，然后小步提交和推送：

   ```bash
   git status
   git diff
   git add .
   git commit -m "implement unit conversion"
   git push -u origin task/12-unit-converter
   ```

4. 在 GitHub 创建目标为 `main` 的 PR，关联任务 Issue，并根据教师 Review 继续修改同一个 PR。

一个任务 Issue 对应一个分支、一个 PR 和一次验收。问题 Issue 不需要分支或 PR。`main` 由教师审核并合并，学生不能直接修改。

## 公开仓库提醒

本仓库内容公开可见。提交前请确认：

- 不包含密码、Token、私钥或 `.env`
- 不包含学号、私人邮箱或其他个人信息
- Git 邮箱使用 GitHub noreply 地址
- 不提交包含本机绝对路径的日志

## 目录

- `src/`：课程代码；项目方向确定后再组织长期项目
- `tests/`：测试代码和测试资源
- `docs/`：与代码实现直接相关的设计文档，不复制完整 Notion 课程

详细提交流程见 [CONTRIBUTING.md](CONTRIBUTING.md)。
