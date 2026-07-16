# 贡献流程

## 分支

- `main` 始终保持可编译、可测试；不要直接向 `main` 提交。
- 学生作业分支使用 `student/<GitHub-ID>/week-XX`，例如 `student/alice/week-01`。
- 教师发布任务或维护仓库时使用 `task/week-XX` 或 `chore/<topic>`。
- 新分支必须基于最新的 `main`；一个分支只处理一个任务。

## 提交

提交信息使用 `<type>: <summary>`：

- `feat`：完成课程功能
- `fix`：修复错误
- `test`：新增或修改测试
- `docs`：修改文档
- `refactor`：不改变行为的代码调整
- `chore`：仓库维护

示例：`feat: implement week 01 temperature converter`

每个提交应保持单一目的，不提交编译产物、编辑器配置或与任务无关的改动。

## Pull Request

- 一个每周任务对应一个 PR，目标分支为 `main`。
- PR 标题应概括完成的任务，例如 `feat: complete week 01 exercises`。
- 使用 PR 模板填写关联 Issue、实现思路、编译命令和测试结果。
- 使用 `Closes #<issue-number>` 关联每周任务。
- 提交 PR 前先同步 `main` 并解决冲突，不使用合并提交更新任务分支。
- Review 期间继续向原分支提交修改，不要为同一任务另开 PR。

## Review

- `@izumiChan16` 是默认审核者；合并前须获得其批准。
- 作者应先完成自查，并回复每条 Review 意见。
- 修改完成后标记对话为已解决；存在分歧时保留上下文并继续讨论。
- Review 重点包括正确性、边界情况、可读性、测试覆盖和是否满足任务验收标准。
- 由仓库维护者在 Review 通过且检查完成后合并 PR。
