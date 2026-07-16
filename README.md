# MarsLab C Course

MarsLab C Course 是一个以每周任务和代码 Review 推进的 C 语言学习仓库。教师通过 Issue 发布任务，学生在独立分支完成代码和测试，并通过 Pull Request 提交作业。

完整课程内容保留在 Notion；本仓库只保存完成任务所需的代码、测试、协作记录和必要的设计文档。

## 目录

- `src/`：MarsLab 课程代码
- `tests/`：测试代码和测试资源
- `docs/`：与代码实现直接相关的设计文档，不复制完整 Notion 课程
- `.github/ISSUE_TEMPLATE/weekly-task.md`：每周任务模板

## 开始

1. 克隆仓库并进入目录：

   ```bash
   git clone git@github.com:izumiChan16/marslab-c-course.git
   cd marslab-c-course
   ```

2. 打开本周任务 Issue，确认学习目标、验收标准以及编译和测试命令。

3. 从最新的 `main` 创建个人任务分支：

   ```bash
   git switch main
   git pull --ff-only
   git switch -c student/<GitHub-ID>/week-XX
   ```

4. 在 `src/` 完成代码，在 `tests/` 补充测试，按任务要求验证后提交 PR。

分支、提交、PR 和 Review 的完整流程见 [CONTRIBUTING.md](CONTRIBUTING.md)。
