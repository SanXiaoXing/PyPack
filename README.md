# PyPack - Python打包命令生成器

> PyPack 是一个辅助 Python 打包的命令复制工具
> 
> PyPack is a command copy tool for python packaging

## 项目简介

PyPack 是一个离线的客户端界面工具，用于生成 Nuitka 和 PyInstaller 的打包命令。它提供了一个美观简洁的用户界面，让用户可以轻松配置打包选项，并一键复制生成的命令。

## 功能特点

- 完全离线运行，无需联网
- 支持 Nuitka 和 PyInstaller 两种主流打包工具
- 提供丰富的配置选项，包括基本设置、打包选项和高级选项
- 实时生成打包命令，并支持一键复制
- 美观简洁的用户界面，易于使用

## 安装依赖

在使用 PyPack 之前，您需要安装所需的依赖包：

```bash
pip install -r requirements.txt
```

## 运行应用

安装依赖后，您可以通过以下命令运行应用：

```bash
python main.py
```

## 打包成可执行文件

PyPack 提供了一个打包脚本，可以将应用打包成独立的 exe 文件，方便分发和使用。

### 使用 PyInstaller 打包

```bash
python build.py --tool pyinstaller
```

### 使用 Nuitka 打包

```bash
python build.py --tool nuitka
```

### 跳过安装依赖

如果您已经安装了所需的依赖包，可以使用 `--skip-deps` 参数跳过安装依赖的步骤：

```bash
python build.py --tool pyinstaller --skip-deps
```

## 使用说明

1. 在应用界面中，您可以通过切换标签页选择 Nuitka 或 PyInstaller
2. 根据需要配置各项打包选项
3. 命令会根据您的配置实时生成
4. 点击「复制」按钮即可将命令复制到剪贴板
5. 将复制的命令粘贴到命令行中执行即可完成打包

## 注意事项

- 使用前请确保已安装 Python 环境
- 如果需要使用 Nuitka 或 PyInstaller 打包功能，请确保已安装相应的工具
- 生成的命令仅供参考，可能需要根据实际情况进行调整

## 许可证

MIT License