# MarsLab C Course

MarsLab C Course 是一个以每周任务和代码 Review 推进的 C 语言学习仓库。教师通过 Issue 发布任务，学生在独立分支完成代码和测试，并通过 Pull Request 提交作业。

完整课程内容保留在 Notion；本仓库只保存完成任务所需的代码、测试、协作记录和必要的设计文档。

## 课程资料

完整课程计划、知识地图和学习规则：

- [Notion：C语言与 Git 自学课程｜MarsLab](https://app.notion.com/p/izxmi/C-Git-MarsLab-39f1d100ccaf81c693c6d6c2c408276d)

## 公开仓库提醒

本仓库内容公开可见。提交前请确认：

- 不包含密码、Token、私钥或 `.env`
- 不包含学号、私人邮箱或其他个人信息
- Git 邮箱使用 GitHub noreply 地址
- 不提交包含本机绝对路径的日志

## 当前阶段

课程尚在初始化阶段。第一个任务发布后，从对应 Issue 开始学习。

## 目录

- `src/`：MarsLab 课程代码
- `tests/`：测试代码和测试资源
- `docs/`：与代码实现直接相关的设计文档，不复制完整 Notion 课程
- `.github/ISSUE_TEMPLATE/weekly-task.md`：每周任务模板

## 任务组织

- 每周使用 `Week XX` Milestone 聚合任务。
- 本周学习总览使用单独 Issue，不需要提交 PR。
- 一个需要独立 Review 的代码任务对应一个 Issue、一个分支和一个 PR。
- 前两周可以每周只安排一个代码 PR；适应流程后再增加到每周两个。

## 开始

1. 克隆仓库并进入目录：

   ```bash
   git clone git@github.com:izumiChan16/marslab-c-course.git
   cd marslab-c-course
   ```

2. 打开当前 Milestone 中的任务 Issue，确认交付物、不需要完成的内容、验收标准以及验证命令。

3. 从最新的 `main` 创建个人任务分支：

   ```bash
   git switch main
   git pull --ff-only
   git switch -c task/12-temperature-converter
   ```

   分支名使用 `task/<issue-number>-<short-name>`；示例中的 Issue 编号和短名称应替换为当前任务。

4. 在 `src/` 完成代码，在 `tests/` 补充测试，按任务要求验证后为该 Issue 提交一个 PR。

分支、提交、PR 和 Review 的完整流程见 [CONTRIBUTING.md](CONTRIBUTING.md)。
