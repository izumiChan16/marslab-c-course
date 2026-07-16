# 贡献流程

## 分支

- `main` 始终保持可编译、可测试；不要直接向 `main` 提交。
- 代码任务分支使用 `task/<issue-number>-<short-name>`，例如 `task/12-temperature-converter`。
- 一个分支只处理一个需要独立 Review 的代码任务。
- 教师维护仓库时使用 `chore/<topic>`。
- 新任务分支从 `main` 创建。

## 任务粒度

- 一个需要独立 Review 的代码任务对应一个 Issue、一个分支和一个 PR。
- 每周使用 `Week XX` Milestone 聚合学习总览、练习、MarsLab 功能和 Git 实验。
- 本周学习总览 Issue 不需要 PR。
- 前两周可以保持每周一个代码 PR；学生适应流程后再增加到每周两个。

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

- 一个代码任务 Issue 对应一个 PR，目标分支为 `main`。
- PR 标题应概括完成的任务，例如 `feat: implement temperature converter`。
- 使用 PR 模板填写关联 Issue、实现思路、编译命令和测试结果。
- 使用 `Closes #<issue-number>` 关联对应的代码任务 Issue。
- 是否需要同步 `main` 以任务 Issue 的要求为准。
- 在尚未学习 rebase 前，不要自行重写已经推送的提交历史。
- 遇到冲突时先保留现场，在任务 Issue 下说明情况。
- Review 期间继续向原分支提交修改，不要为同一任务另开 PR。

## Review

- `@izumiChan16` 是默认审核者；合并前须获得其批准。
- 作者应先完成自查，并回复每条 Review 意见。
- 修改完成后标记对话为已解决；存在分歧时保留上下文并继续讨论。
- Review 重点包括正确性、边界情况、可读性、测试覆盖和是否满足任务验收标准。
- 由仓库维护者在 Review 通过且检查完成后合并 PR。
