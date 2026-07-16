# 提交流程

1. 从当前已解锁的任务中选择一个 `ready` Issue。
2. 确认 Issue 中的前置节点、目标和完成标准。
3. 从 `main` 创建该 Issue 的任务分支。
4. 编写代码并进行小步提交。
5. 推送分支并创建 PR。
6. 根据 Review 修改同一个 PR。
7. 由教师验收、合并并解锁后继节点。

同时只能进行一个代码 PR。知识节点没有代码任务时，不创建分支或 PR。

## 分支名称

使用 `task/<Issue编号>-<简短名称>`，例如：

- `task/12-temperature-converter`
- `task/13-rover-movement`
- `task/14-merge-conflict`

一个任务节点只使用一个 Issue、一个分支和一个 PR。

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
