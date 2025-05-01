
import tkinter as tk
from tkinter import ttk
import os
import sys
import pyperclip
from tkinter import messagebox

class PyPackApp:
    def __init__(self, root):
        self.root = root
        self.root.title("PyPack - Python打包命令生成器")
        self.root.geometry("950x800")
        self.root.minsize(800, 600)
        
        # 设置样式
        self.style = ttk.Style()
        self.style.configure("TNotebook", background="#f5f6fa")
        self.style.configure("TFrame", background="#ffffff")
        self.style.configure("TLabel", background="#ffffff", font=("Segoe UI", 10))
        self.style.configure("TCheckbutton", background="#ffffff", font=("Segoe UI", 10))
        self.style.configure("TButton", font=("Segoe UI", 10))
        self.style.configure("Header.TLabel", font=("Segoe UI", 16, "bold"), background="#2c3e50", foreground="white")
        self.style.configure("Subheader.TLabel", font=("Segoe UI", 12, "bold"), foreground="#3498db")

        # 创建主框架（使用Canvas+Scrollbar实现整体滚动）
        self.main_container = tk.Frame(root, bg="#f5f6fa")
        self.main_container.pack(fill=tk.BOTH, expand=True)

        # 创建标题
        header_frame = tk.Frame(self.main_container, bg="#2c3e50")
        header_frame.pack(fill=tk.X, pady=(0, 20))
        
        header_label = ttk.Label(header_frame, text="PyPack", style="Header.TLabel")
        header_label.pack(pady=15)
        
        subheader_label = ttk.Label(header_frame, text="轻松生成 Nuitka 和 PyInstaller 打包命令", foreground="white", background="#2c3e50")
        subheader_label.pack(pady=(0, 15))
        
        # 创建选项卡
        self.notebook = ttk.Notebook(self.main_container)
        self.notebook.pack(fill=tk.BOTH, expand=True, padx=20, pady=20)
        
        # 为每个选项卡创建带滚动条的框架
        # Nuitka 选项卡
        self.nuitka_scroll_container = ttk.Frame(self.notebook)
        self.notebook.add(self.nuitka_scroll_container, text="Nuitka")
        self.nuitka_canvas = tk.Canvas(self.nuitka_scroll_container, bg="#ffffff", highlightthickness=0)
        self.nuitka_scrollbar = ttk.Scrollbar(self.nuitka_scroll_container, orient=tk.VERTICAL, command=self.nuitka_canvas.yview)
        self.nuitka_canvas.configure(yscrollcommand=self.nuitka_scrollbar.set)
        self.nuitka_scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.nuitka_canvas.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)
        self.nuitka_frame = ttk.Frame(self.nuitka_canvas, padding=20)
        self.nuitka_window = self.nuitka_canvas.create_window((0, 0), window=self.nuitka_frame, anchor="nw", tags="nuitka_frame")
        def _nuitka_frame_configure(event):
            self.nuitka_canvas.configure(scrollregion=self.nuitka_canvas.bbox("all"))
            self.nuitka_canvas.itemconfig(self.nuitka_window, width=self.nuitka_canvas.winfo_width())
        self.nuitka_frame.bind("<Configure>", _nuitka_frame_configure)
        # 修改：直接将滚轮事件绑定到 Nuitka Canvas
        def _on_nuitka_mousewheel(event):
            # macOS 和 Windows 使用 event.delta
            if sys.platform == "darwin" or sys.platform == "win32":
                self.nuitka_canvas.yview_scroll(int(-1*(event.delta/120)), "units")
            # Linux 使用 event.num
            elif event.num == 4:
                self.nuitka_canvas.yview_scroll(-1, "units")
            elif event.num == 5:
                self.nuitka_canvas.yview_scroll(1, "units")
        self.nuitka_canvas.bind("<MouseWheel>", _on_nuitka_mousewheel) # Windows & macOS
        self.nuitka_canvas.bind("<Button-4>", _on_nuitka_mousewheel)   # Linux scroll up
        self.nuitka_canvas.bind("<Button-5>", _on_nuitka_mousewheel)   # Linux scroll down

        # PyInstaller 选项卡
        self.pyinstaller_scroll_container = ttk.Frame(self.notebook)
        self.notebook.add(self.pyinstaller_scroll_container, text="PyInstaller")
        self.pyinstaller_canvas = tk.Canvas(self.pyinstaller_scroll_container, bg="#ffffff", highlightthickness=0)
        self.pyinstaller_scrollbar = ttk.Scrollbar(self.pyinstaller_scroll_container, orient=tk.VERTICAL, command=self.pyinstaller_canvas.yview)
        self.pyinstaller_canvas.configure(yscrollcommand=self.pyinstaller_scrollbar.set)
        self.pyinstaller_scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.pyinstaller_canvas.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)
        self.pyinstaller_frame = ttk.Frame(self.pyinstaller_canvas, padding=20)
        self.pyinstaller_window = self.pyinstaller_canvas.create_window((0, 0), window=self.pyinstaller_frame, anchor="nw", tags="pyinstaller_frame")
        def _pyinstaller_frame_configure(event):
            self.pyinstaller_canvas.configure(scrollregion=self.pyinstaller_canvas.bbox("all"))
            self.pyinstaller_canvas.itemconfig(self.pyinstaller_window, width=self.pyinstaller_canvas.winfo_width())
        self.pyinstaller_frame.bind("<Configure>", _pyinstaller_frame_configure)
        # 修改：直接将滚轮事件绑定到 PyInstaller Canvas
        def _on_pyinstaller_mousewheel(event):
             # macOS 和 Windows 使用 event.delta
            if sys.platform == "darwin" or sys.platform == "win32":
                self.pyinstaller_canvas.yview_scroll(int(-1*(event.delta/120)), "units")
            # Linux 使用 event.num
            elif event.num == 4:
                 self.pyinstaller_canvas.yview_scroll(-1, "units")
            elif event.num == 5:
                 self.pyinstaller_canvas.yview_scroll(1, "units")
        self.pyinstaller_canvas.bind("<MouseWheel>", _on_pyinstaller_mousewheel) # Windows & macOS
        self.pyinstaller_canvas.bind("<Button-4>", _on_pyinstaller_mousewheel)   # Linux scroll up
        self.pyinstaller_canvas.bind("<Button-5>", _on_pyinstaller_mousewheel)   # Linux scroll down

        # 初始化选项卡内容
        self.init_nuitka_tab()
        self.init_pyinstaller_tab()
        
        # 创建底部信息
        footer_frame = ttk.Frame(self.main_container)
        footer_frame.pack(fill=tk.X, pady=(20, 0))
        
        footer_label = ttk.Label(footer_frame, text="PyPack - 离线Python打包命令生成工具 | 版本 1.0.0", foreground="#7f8c8d")
        footer_label.pack()
        
        # 确保滚动区域初始化
        self.root.update()
        self.nuitka_canvas.configure(scrollregion=self.nuitka_canvas.bbox("all"))
        self.pyinstaller_canvas.configure(scrollregion=self.pyinstaller_canvas.bbox("all"))

        # 移除之前复杂的选项卡切换绑定逻辑
        # def _on_tab_change(event): ... (这部分代码可以删除了)
        # self.notebook.bind("<<NotebookTabChanged>>", _on_tab_change)
        # self.root.after(100, lambda: self.notebook.event_generate("<<NotebookTabChanged>>"))

    def init_nuitka_tab(self):
        # 基本设置部分
        basic_frame = self.create_section_frame(self.nuitka_frame, "基本设置")
        
        # 第一行
        row1 = ttk.Frame(basic_frame)
        row1.pack(fill=tk.X, pady=(10, 5))
        
        # 主程序路径
        main_file_frame = ttk.Frame(row1)
        main_file_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(main_file_frame, text="主程序路径").pack(anchor=tk.W)
        self.n_main_file = ttk.Entry(main_file_frame)
        self.n_main_file.pack(fill=tk.X, pady=5)
        self.n_main_file.insert(0, "main.py")
        
        # 输出目录
        output_dir_frame = ttk.Frame(row1)
        output_dir_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(output_dir_frame, text="输出目录").pack(anchor=tk.W)
        self.n_output_dir = ttk.Entry(output_dir_frame)
        self.n_output_dir.pack(fill=tk.X, pady=5)
        self.n_output_dir.insert(0, "dist")
        
        # 第二行
        row2 = ttk.Frame(basic_frame)
        row2.pack(fill=tk.X, pady=5)
        
        # 应用名称
        app_name_frame = ttk.Frame(row2)
        app_name_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(app_name_frame, text="应用名称").pack(anchor=tk.W)
        self.n_app_name = ttk.Entry(app_name_frame)
        self.n_app_name.pack(fill=tk.X, pady=5)
        
        # 图标文件
        icon_frame = ttk.Frame(row2)
        icon_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(icon_frame, text="图标文件").pack(anchor=tk.W)
        self.n_icon = ttk.Entry(icon_frame)
        self.n_icon.pack(fill=tk.X, pady=5)
        self.n_icon.insert(0, "icon.ico")
        
        # 打包选项部分
        options_frame = self.create_section_frame(self.nuitka_frame, "打包选项")
        
        # 复选框选项
        self.n_standalone = tk.BooleanVar(value=True)
        ttk.Checkbutton(options_frame, text="独立模式 (--standalone)", variable=self.n_standalone, command=self.generate_nuitka_command).pack(anchor=tk.W, pady=2)
        
        self.n_onefile = tk.BooleanVar(value=True)
        ttk.Checkbutton(options_frame, text="单文件模式 (--onefile)", variable=self.n_onefile, command=self.generate_nuitka_command).pack(anchor=tk.W, pady=2)
        
        self.n_windowed = tk.BooleanVar(value=False)
        ttk.Checkbutton(options_frame, text="禁用控制台窗口 (--disable-console)", variable=self.n_windowed, command=self.generate_nuitka_command).pack(anchor=tk.W, pady=2)
        
        self.n_follow_imports = tk.BooleanVar(value=False)
        ttk.Checkbutton(options_frame, text="跟踪所有导入 (--follow-imports)", variable=self.n_follow_imports, command=self.generate_nuitka_command).pack(anchor=tk.W, pady=2)
        
        self.n_include_plugins_for_qt = tk.BooleanVar(value=False)
        ttk.Checkbutton(options_frame, text="包含Qt插件 (--include-plugins-for-qt)", variable=self.n_include_plugins_for_qt, command=self.generate_nuitka_command).pack(anchor=tk.W, pady=2)
        
        # 高级选项部分
        advanced_frame = self.create_section_frame(self.nuitka_frame, "高级选项")
        
        # 第一行
        adv_row1 = ttk.Frame(advanced_frame)
        adv_row1.pack(fill=tk.X, pady=(10, 5))
        
        # 包含模块
        include_module_frame = ttk.Frame(adv_row1)
        include_module_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(include_module_frame, text="包含模块").pack(anchor=tk.W)
        self.n_include_module = ttk.Entry(include_module_frame)
        self.n_include_module.pack(fill=tk.X, pady=5)
        
        # 包含包
        include_package_frame = ttk.Frame(adv_row1)
        include_package_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(include_package_frame, text="包含包").pack(anchor=tk.W)
        self.n_include_package = ttk.Entry(include_package_frame)
        self.n_include_package.pack(fill=tk.X, pady=5)
        
        # 第二行
        adv_row2 = ttk.Frame(advanced_frame)
        adv_row2.pack(fill=tk.X, pady=5)
        
        # 包含数据文件
        include_data_files_frame = ttk.Frame(adv_row2)
        include_data_files_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(include_data_files_frame, text="包含数据文件").pack(anchor=tk.W)
        self.n_include_data_files = ttk.Entry(include_data_files_frame)
        self.n_include_data_files.pack(fill=tk.X, pady=5)
        
        # 额外选项
        extra_options_frame = ttk.Frame(adv_row2)
        extra_options_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(extra_options_frame, text="额外选项").pack(anchor=tk.W)
        self.n_extra_options = ttk.Entry(extra_options_frame)
        self.n_extra_options.pack(fill=tk.X, pady=5)
        
        # 命令输出部分
        command_frame = self.create_section_frame(self.nuitka_frame, "生成的命令")
        
        # 命令显示框
        self.n_command_text = tk.Text(command_frame, height=5, wrap=tk.WORD, bg="#f8f9fa", font=("Consolas", 10))
        self.n_command_text.pack(fill=tk.BOTH, expand=True, pady=10)
        
        # 按钮框架
        button_frame = ttk.Frame(command_frame)
        button_frame.pack(fill=tk.X, pady=(0, 5))
        
        # 复制按钮
        copy_button = ttk.Button(button_frame, text="复制命令", command=lambda: self.copy_command(self.n_command_text))
        copy_button.pack(side=tk.RIGHT, padx=(5, 0))
        
        # 生成初始命令
        self.generate_nuitka_command()
        
        # 绑定事件
        self.n_main_file.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_output_dir.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_app_name.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_icon.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_include_module.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_include_package.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_include_data_files.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
        self.n_extra_options.bind("<KeyRelease>", lambda e: self.generate_nuitka_command())
    
    def init_pyinstaller_tab(self):
        # 基本设置部分
        basic_frame = self.create_section_frame(self.pyinstaller_frame, "基本设置")
        
        # 第一行
        row1 = ttk.Frame(basic_frame)
        row1.pack(fill=tk.X, pady=(10, 5))
        
        # 主程序路径
        main_file_frame = ttk.Frame(row1)
        main_file_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(main_file_frame, text="主程序路径").pack(anchor=tk.W)
        self.p_main_file = ttk.Entry(main_file_frame)
        self.p_main_file.pack(fill=tk.X, pady=5)
        self.p_main_file.insert(0, "main.py")
        
        # 输出目录
        output_dir_frame = ttk.Frame(row1)
        output_dir_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(output_dir_frame, text="输出目录").pack(anchor=tk.W)
        self.p_output_dir = ttk.Entry(output_dir_frame)
        self.p_output_dir.pack(fill=tk.X, pady=5)
        self.p_output_dir.insert(0, "dist")
        
        # 第二行
        row2 = ttk.Frame(basic_frame)
        row2.pack(fill=tk.X, pady=5)
        
        # 应用名称
        app_name_frame = ttk.Frame(row2)
        app_name_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(app_name_frame, text="应用名称").pack(anchor=tk.W)
        self.p_app_name = ttk.Entry(app_name_frame)
        self.p_app_name.pack(fill=tk.X, pady=5)
        
        # 图标文件
        icon_frame = ttk.Frame(row2)
        icon_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(icon_frame, text="图标文件").pack(anchor=tk.W)
        self.p_icon = ttk.Entry(icon_frame)
        self.p_icon.pack(fill=tk.X, pady=5)
        self.p_icon.insert(0, "icon.ico")
        
        # 打包选项部分
        options_frame = self.create_section_frame(self.pyinstaller_frame, "打包选项")
        
        # 复选框选项
        self.p_onefile = tk.BooleanVar(value=True)
        ttk.Checkbutton(options_frame, text="单文件模式 (--onefile)", variable=self.p_onefile, command=self.generate_pyinstaller_command).pack(anchor=tk.W, pady=2)
        
        self.p_windowed = tk.BooleanVar(value=False)
        ttk.Checkbutton(options_frame, text="禁用控制台窗口 (--windowed)", variable=self.p_windowed, command=self.generate_pyinstaller_command).pack(anchor=tk.W, pady=2)
        
        self.p_clean = tk.BooleanVar(value=True)
        ttk.Checkbutton(options_frame, text="清理临时文件 (--clean)", variable=self.p_clean, command=self.generate_pyinstaller_command).pack(anchor=tk.W, pady=2)
        
        self.p_noupx = tk.BooleanVar(value=False)
        ttk.Checkbutton(options_frame, text="禁用UPX压缩 (--noupx)", variable=self.p_noupx, command=self.generate_pyinstaller_command).pack(anchor=tk.W, pady=2)
        
        # 高级选项部分
        advanced_frame = self.create_section_frame(self.pyinstaller_frame, "高级选项")
        
        # 第一行
        adv_row1 = ttk.Frame(advanced_frame)
        adv_row1.pack(fill=tk.X, pady=(10, 5))
        
        # 隐藏导入
        hidden_import_frame = ttk.Frame(adv_row1)
        hidden_import_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(hidden_import_frame, text="隐藏导入").pack(anchor=tk.W)
        self.p_hidden_import = ttk.Entry(hidden_import_frame)
        self.p_hidden_import.pack(fill=tk.X, pady=5)
        
        # 添加数据
        add_data_frame = ttk.Frame(adv_row1)
        add_data_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(add_data_frame, text="添加数据").pack(anchor=tk.W)
        self.p_add_data = ttk.Entry(add_data_frame)
        self.p_add_data.pack(fill=tk.X, pady=5)
        
        # 第二行
        adv_row2 = ttk.Frame(advanced_frame)
        adv_row2.pack(fill=tk.X, pady=5)
        
        # 添加二进制文件
        add_binary_frame = ttk.Frame(adv_row2)
        add_binary_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(0, 5))
        
        ttk.Label(add_binary_frame, text="添加二进制文件").pack(anchor=tk.W)
        self.p_add_binary = ttk.Entry(add_binary_frame)
        self.p_add_binary.pack(fill=tk.X, pady=5)
        
        # 额外选项
        extra_options_frame = ttk.Frame(adv_row2)
        extra_options_frame.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(5, 0))
        
        ttk.Label(extra_options_frame, text="额外选项").pack(anchor=tk.W)
        self.p_extra_options = ttk.Entry(extra_options_frame)
        self.p_extra_options.pack(fill=tk.X, pady=5)
        
        # 命令输出部分
        command_frame = self.create_section_frame(self.pyinstaller_frame, "生成的命令")
        
        # 命令显示框
        self.p_command_text = tk.Text(command_frame, height=5, wrap=tk.WORD, bg="#f8f9fa", font=("Consolas", 10))
        self.p_command_text.pack(fill=tk.BOTH, expand=True, pady=10)
        
        # 复制按钮
        copy_button = ttk.Button(command_frame, text="复制命令", command=lambda: self.copy_command(self.p_command_text))
        copy_button.pack(anchor=tk.E)
        
        # 生成初始命令
        self.generate_pyinstaller_command()
        
        # 绑定事件
        self.p_main_file.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_output_dir.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_app_name.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_icon.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_hidden_import.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_add_data.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_add_binary.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())
        self.p_extra_options.bind("<KeyRelease>", lambda e: self.generate_pyinstaller_command())

    def create_section_frame(self, parent, title):
        section_frame = ttk.Frame(parent)
        section_frame.pack(fill=tk.X, pady=(15, 5))

        # 标题
        title_frame = ttk.Frame(section_frame)
        title_frame.pack(fill=tk.X)

        title_label = ttk.Label(title_frame, text=title, style="Subheader.TLabel")
        title_label.pack(anchor=tk.W)

        separator = ttk.Separator(title_frame, orient=tk.HORIZONTAL)
        separator.pack(fill=tk.X, pady=(5, 10))

        return section_frame

    def generate_nuitka_command(self, *args):
        main_file = self.n_main_file.get() or "main.py"
        output_dir = self.n_output_dir.get()
        app_name = self.n_app_name.get()
        icon = self.n_icon.get()
        standalone = self.n_standalone.get()
        onefile = self.n_onefile.get()
        windowed = self.n_windowed.get()
        follow_imports = self.n_follow_imports.get()
        include_plugins_for_qt = self.n_include_plugins_for_qt.get()
        include_module = self.n_include_module.get()
        include_package = self.n_include_package.get()
        include_data_files = self.n_include_data_files.get()
        extra_options = self.n_extra_options.get()
        
        command = "nuitka"
        if standalone:
            command += " --standalone"
        if onefile:
            command += " --onefile"
        if windowed:
            command += " --disable-console"
        if follow_imports:
            command += " --follow-imports"
        if include_plugins_for_qt:
            command += " --include-plugins-for-qt"
        
        if output_dir:
            command += f" --output-dir=\"{output_dir}\""
        if app_name:
            command += f" --output-filename=\"{app_name}\""
        if icon:
            command += f" --windows-icon-from-ico=\"{icon}\""
        
        if include_module:
            modules = include_module.split(',')
            for module in modules:
                if module.strip():
                    command += f" --include-module=\"{module.strip()}\""
        
        if include_package:
            packages = include_package.split(',')
            for pkg in packages:
                if pkg.strip():
                    command += f" --include-package=\"{pkg.strip()}\""
        
        if include_data_files:
            data_files = include_data_files.split(',')
            for data_file in data_files:
                if data_file.strip():
                    command += f" --include-data-files=\"{data_file.strip()}\""
        
        if extra_options:
            command += f" {extra_options}"
        
        command += f" \"{main_file}\""
        
        # 更新命令文本框
        self.n_command_text.delete(1.0, tk.END)
        self.n_command_text.insert(tk.END, command)
    
    def generate_pyinstaller_command(self, *args):
        main_file = self.p_main_file.get() or "main.py"
        output_dir = self.p_output_dir.get()
        app_name = self.p_app_name.get()
        icon = self.p_icon.get()
        onefile = self.p_onefile.get()
        windowed = self.p_windowed.get()
        clean = self.p_clean.get()
        noupx = self.p_noupx.get()
        hidden_import = self.p_hidden_import.get()
        add_data = self.p_add_data.get()
        add_binary = self.p_add_binary.get()
        extra_options = self.p_extra_options.get()  # 修复这里的语法错误
        
        command = "pyinstaller"
        if onefile:
            command += " --onefile"
        if windowed:
            command += " --windowed"
        if clean:
            command += " --clean"
        if noupx:
            command += " --noupx"
        
        if output_dir:
            command += f" --distpath=\"{output_dir}\""
        if app_name:
            command += f" --name=\"{app_name}\""
        if icon:
            command += f" --icon=\"{icon}\""
        
        if hidden_import:
            imports = hidden_import.split(',')
            for imp in imports:
                if imp.strip():
                    command += f" --hidden-import=\"{imp.strip()}\""
        
        if add_data:
            data_items = add_data.split(',')
            for data_item in data_items:
                if data_item.strip():
                    command += f" --add-data=\"{data_item.strip()}\""
        
        if add_binary:
            binary_items = add_binary.split(',')
            for binary_item in binary_items:
                if binary_item.strip():
                    command += f" --add-binary=\"{binary_item.strip()}\""
        
        if extra_options:
            command += f" {extra_options}"
        
        command += f" \"{main_file}\""
        
        # 更新命令文本框
        self.p_command_text.delete(1.0, tk.END)
        self.p_command_text.insert(tk.END, command)
    
    def copy_command(self, text_widget):
        command = text_widget.get(1.0, tk.END).strip()
        pyperclip.copy(command)
        messagebox.showinfo("复制成功", "命令已复制到剪贴板")
    
    def preview_command(self, tab_type):
        if tab_type == "nuitka":
            command = self.n_command_text.get(1.0, tk.END).strip()
            self.n_preview_text.config(state=tk.NORMAL)
            self.n_preview_text.delete(1.0, tk.END)
            
            # 模拟命令执行结果
            preview = f"正在使用 Nuitka 打包...\n"
            preview += f"正在处理主程序: {self.n_main_file.get() or 'main.py'}\n"
            if self.n_standalone.get():
                preview += "使用独立模式打包...\n"
            if self.n_onefile.get():
                preview += "生成单文件可执行程序...\n"
            preview += f"打包完成! 输出目录: {self.n_output_dir.get() or 'dist'}"
            
            self.n_preview_text.insert(tk.END, preview)
            self.n_preview_text.config(state=tk.DISABLED)
        else:
            # PyInstaller 预览功能可以在这里实现
            pass

# 主程序入口
if __name__ == "__main__":
    root = tk.Tk()
    app = PyPackApp(root)
    root.mainloop()
