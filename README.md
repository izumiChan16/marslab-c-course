# MarsLab C Course

MarsLab C Course 是一个按能力节点解锁、通过代码任务和 Review 验证掌握程度的 C 语言自学仓库。

> 知识节点提供前置能力，任务节点提供掌握证据；满足前置条件后解锁下一节点。

时间只作为预计投入，不作为课程结构。

## 课程资料与平台分工

- [Notion：C语言与 Git 自学课程｜MarsLab](https://app.notion.com/p/izxmi/C-Git-MarsLab-39f1d100ccaf81c693c6d6c2c408276d)
- Notion 保存知识节点、依赖关系、学习材料、课程地图、毕业标准、AI 规则和当前已解锁节点。
- GitHub 保存任务 Issue、学生代码、PR、Review、测试记录和完成证据。

Notion 回答“应该学什么和为什么”；GitHub 回答“具体做什么，以及是否真的完成”。

## 节点类型

- `K`：知识节点，只保存在 Notion，不单独创建 Issue。
- `L`：独立练习，在 GitHub 独立完成，不修改 MarsLab。
- `P`：MarsLab 项目功能，对应一个功能和一个 PR。
- `G`：Git 技能实验，在沙箱或真实 PR 中完成。
- `C`：能力检查，由教师验收，不一定需要合并代码。

GitHub 任务标题使用 `[Lab]`、`[MarsLab]`、`[Git]` 或 `[Check]` 表示类型。

## 解锁规则

- 同时最多有 2 个标记为 `ready` 的节点。
- 同时最多有 1 个代码 PR。
- 一个节点通过并关闭 Issue 后，才解锁后继节点。
- 卡住超过 3 次学习时段时，将 Issue 标记为 `blocked` 并请求辅导。
- 每完成 4～6 个节点，安排一次简短能力检查。
- Stage Milestone 只表示能力阶段，不设置硬性截止日期。

## 完成任务节点

1. 在 Notion 确认当前已解锁节点和前置知识，再打开对应 GitHub Issue。

2. 从最新的 `main` 创建任务分支。下面以 Issue `#12` 为例：

   ```bash
   git switch main
   git pull --ff-only
   git switch -c task/12-rover-movement
   ```

3. 完成代码并检查改动，然后小步提交和推送：

   ```bash
   git status
   git diff
   git add .
   git commit -m "implement rover movement"
   git push -u origin task/12-rover-movement
   ```

4. 在 GitHub 创建目标为 `main` 的 PR，关联任务 Issue，并根据教师 Review 继续修改同一个 PR。

一个任务节点对应一个 Issue、一个分支、一个 PR 和一次验收。`main` 不能直接修改，由教师审核并合并。

## 公开仓库提醒

本仓库内容公开可见。提交前请确认：

- 不包含密码、Token、私钥或 `.env`
- 不包含学号、私人邮箱或其他个人信息
- Git 邮箱使用 GitHub noreply 地址
- 不提交包含本机绝对路径的日志

## 目录

- `src/`：MarsLab 课程代码
- `tests/`：测试代码和测试资源
- `docs/`：与代码实现直接相关的设计文档，不复制完整 Notion 课程

详细提交流程见 [CONTRIBUTING.md](CONTRIBUTING.md)。
