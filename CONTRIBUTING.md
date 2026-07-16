# 提交流程

1. 阅读教师发布的任务 Issue。
2. 学习 Issue 关联的 2～4 个知识点，并确认 Lab 和完成标准。
3. 从 `main` 创建该 Issue 的任务分支。
4. 编写代码并进行小步提交。
5. 推送分支并创建 PR。
6. 根据 Review 修改同一个 PR。
7. 由教师验收并合并。

知识点不单独创建 Issue。一个任务 Issue 对应一个 Lab、一个分支和一个 PR。

## 分支名称

使用 `task/<Issue编号>-<简短名称>`，例如：

- `task/12-temperature-converter`
- `task/13-rover-movement`
- `task/14-merge-conflict`

一个任务 Issue 只使用一个分支和一个 PR。

## 提出问题

- 一般问题直接询问老师，不需要创建 Issue。
- 需要异步跟踪、保留错误输出或记录多次尝试时，使用“学习问题”模板创建 Issue。
- 问题 Issue 不需要创建分支或 PR；问题转变为代码任务时，由教师另行发布任务 Issue。

## 提交信息

提交信息应说明“这次修改做了什么”。

推荐：

- `add temperature conversion`
- `handle invalid input`
- `fix movement boundary check`

避免：

- `update`
- `change`
- `fix`
- `123`

## 注意

- 不要直接修改 `main`
- 不要提交 `.exe`、`.o` 或 `a.out`
- 不要提交密码、Token 或个人资料
- 不确定时先在对应 Issue 下提问
