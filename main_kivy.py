import os
import sys
import pyperclip
from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.gridlayout import GridLayout
from kivy.uix.scrollview import ScrollView
from kivy.uix.label import Label
from kivy.uix.button import Button
from kivy.uix.textinput import TextInput
from kivy.uix.checkbox import CheckBox
from kivy.uix.tabbedpanel import TabbedPanel, TabbedPanelItem
from kivy.core.window import Window
from kivy.uix.popup import Popup
from kivy.properties import StringProperty, BooleanProperty
from kivy.metrics import dp
from kivy.lang import Builder

# 定义 Kivy 界面
Builder.load_string('''
<HeaderLabel@Label>:
    font_size: '18sp'
    bold: True
    color: 1, 1, 1, 1
    size_hint_y: None
    height: dp(50)
    canvas.before:
        Color:
            rgba: 0.17, 0.24, 0.31, 1  # #2c3e50
        Rectangle:
            pos: self.pos
            size: self.size

<SubHeaderLabel@Label>:
    font_size: '14sp'
    bold: True
    color: 0.2, 0.6, 0.86, 1  # #3498db
    size_hint_y: None
    height: dp(30)

<SectionLabel@Label>:
    font_size: '14sp'
    bold: True
    color: 0.2, 0.6, 0.86, 1  # #3498db
    size_hint_y: None
    height: dp(30)
    halign: 'left'
    text_size: self.width, None

<FooterLabel@Label>:
    font_size: '12sp'
    color: 0.5, 0.55, 0.55, 1  # #7f8c8d
    size_hint_y: None
    height: dp(30)

<SettingLabel@Label>:
    font_size: '14sp'
    halign: 'left'
    text_size: self.width, None
    size_hint_y: None
    height: dp(30)

<SettingInput@TextInput>:
    multiline: False
    size_hint_y: None
    height: dp(40)
    padding: [10, 10, 10, 0]

<CommandTextInput@TextInput>:
    background_color: 0.97, 0.97, 0.98, 1  # #f8f9fa
    readonly: True
    font_name: 'RobotoMono-Regular'
    size_hint_y: None
    height: dp(150)

<PreviewTextInput@TextInput>:
    background_color: 0.94, 0.94, 0.94, 1  # #f0f0f0
    readonly: True
    font_name: 'RobotoMono-Regular'
    size_hint_y: None
    height: dp(200)

<SettingCheckBox@BoxLayout>:
    orientation: 'horizontal'
    size_hint_y: None
    height: dp(30)
    padding: 0
    spacing: dp(10)
    
    CheckBox:
        id: checkbox
        size_hint_x: None
        width: dp(30)
    
    Label:
        text: root.text
        halign: 'left'
        text_size: self.width, None
        valign: 'center'

<SettingRow@BoxLayout>:
    orientation: 'horizontal'
    size_hint_y: None
    height: dp(80)
    spacing: dp(10)

<SectionBox@BoxLayout>:
    orientation: 'vertical'
    size_hint_y: None
    height: self.minimum_height
    padding: dp(10)
    spacing: dp(5)

<PyPackRoot>:
    orientation: 'vertical'
    padding: dp(10)
    spacing: dp(10)
    
    canvas.before:
        Color:
            rgba: 0.96, 0.96, 0.98, 1  # #f5f6fa
        Rectangle:
            pos: self.pos
            size: self.size
    
    BoxLayout:
        orientation: 'vertical'
        size_hint_y: None
        height: dp(80)
        canvas.before:
            Color:
                rgba: 0.17, 0.24, 0.31, 1  # #2c3e50
            Rectangle:
                pos: self.pos
                size: self.size
        
        HeaderLabel:
            text: 'PyPack'
        
        Label:
            text: '轻松生成 Nuitka 和 PyInstaller 打包命令'
            color: 1, 1, 1, 1
            size_hint_y: None
            height: dp(30)
    
    TabbedPanel:
        id: tabs
        do_default_tab: False
        tab_width: dp(200)
        tab_height: dp(40)
        
        TabbedPanelItem:
            text: 'Nuitka'
            
            ScrollView:
                do_scroll_x: False
                
                BoxLayout:
                    orientation: 'vertical'
                    size_hint_y: None
                    height: self.minimum_height
                    padding: dp(10)
                    spacing: dp(15)
                    
                    # 基本设置部分
                    SectionBox:
                        SectionLabel:
                            text: '基本设置'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '主程序路径'
                                
                                SettingInput:
                                    id: n_main_file
                                    text: 'main.py'
                                    on_text: root.generate_nuitka_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '输出目录'
                                
                                SettingInput:
                                    id: n_output_dir
                                    text: 'dist'
                                    on_text: root.generate_nuitka_command()
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '应用名称'
                                
                                SettingInput:
                                    id: n_app_name
                                    text: ''
                                    on_text: root.generate_nuitka_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '图标文件'
                                
                                SettingInput:
                                    id: n_icon
                                    text: 'icon.ico'
                                    on_text: root.generate_nuitka_command()
                    
                    # 打包选项部分
                    SectionBox:
                        SectionLabel:
                            text: '打包选项'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        SettingCheckBox:
                            text: '独立模式 (--standalone)'
                            id: n_standalone_box
                            
                            CheckBox:
                                id: n_standalone
                                active: True
                                on_active: root.generate_nuitka_command()
                        
                        SettingCheckBox:
                            text: '单文件模式 (--onefile)'
                            id: n_onefile_box
                            
                            CheckBox:
                                id: n_onefile
                                active: True
                                on_active: root.generate_nuitka_command()
                        
                        SettingCheckBox:
                            text: '禁用控制台窗口 (--disable-console)'
                            id: n_windowed_box
                            
                            CheckBox:
                                id: n_windowed
                                active: False
                                on_active: root.generate_nuitka_command()
                        
                        SettingCheckBox:
                            text: '跟踪所有导入 (--follow-imports)'
                            id: n_follow_imports_box
                            
                            CheckBox:
                                id: n_follow_imports
                                active: False
                                on_active: root.generate_nuitka_command()
                        
                        SettingCheckBox:
                            text: '包含Qt插件 (--include-plugins-for-qt)'
                            id: n_include_plugins_for_qt_box
                            
                            CheckBox:
                                id: n_include_plugins_for_qt
                                active: False
                                on_active: root.generate_nuitka_command()
                    
                    # 高级选项部分
                    SectionBox:
                        SectionLabel:
                            text: '高级选项'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '包含模块'
                                
                                SettingInput:
                                    id: n_include_module
                                    text: ''
                                    on_text: root.generate_nuitka_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '包含包'
                                
                                SettingInput:
                                    id: n_include_package
                                    text: ''
                                    on_text: root.generate_nuitka_command()
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '包含数据文件'
                                
                                SettingInput:
                                    id: n_include_data_files
                                    text: ''
                                    on_text: root.generate_nuitka_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '额外选项'
                                
                                SettingInput:
                                    id: n_extra_options
                                    text: ''
                                    on_text: root.generate_nuitka_command()
                    
                    # 命令输出部分
                    SectionBox:
                        SectionLabel:
                            text: '生成的命令'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        CommandTextInput:
                            id: n_command_text
                        
                        BoxLayout:
                            orientation: 'horizontal'
                            size_hint_y: None
                            height: dp(40)
                            spacing: dp(10)
                            
                            Widget:
                                size_hint_x: 1
                            
                            Button:
                                text: '预览效果'
                                size_hint_x: None
                                width: dp(120)
                                on_release: root.preview_command('nuitka')
                            
                            Button:
                                text: '复制命令'
                                size_hint_x: None
                                width: dp(120)
                                on_release: root.copy_command(n_command_text)
                        
                        BoxLayout:
                            orientation: 'vertical'
                            size_hint_y: None
                            height: dp(230)
                            
                            Label:
                                text: '命令预览'
                                size_hint_y: None
                                height: dp(30)
                                halign: 'left'
                                text_size: self.width, None
                            
                            PreviewTextInput:
                                id: n_preview_text
        
        TabbedPanelItem:
            text: 'PyInstaller'
            
            ScrollView:
                do_scroll_x: False
                
                BoxLayout:
                    orientation: 'vertical'
                    size_hint_y: None
                    height: self.minimum_height
                    padding: dp(10)
                    spacing: dp(15)
                    
                    # 基本设置部分
                    SectionBox:
                        SectionLabel:
                            text: '基本设置'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '主程序路径'
                                
                                SettingInput:
                                    id: p_main_file
                                    text: 'main.py'
                                    on_text: root.generate_pyinstaller_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '输出目录'
                                
                                SettingInput:
                                    id: p_output_dir
                                    text: 'dist'
                                    on_text: root.generate_pyinstaller_command()
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '应用名称'
                                
                                SettingInput:
                                    id: p_app_name
                                    text: ''
                                    on_text: root.generate_pyinstaller_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '图标文件'
                                
                                SettingInput:
                                    id: p_icon
                                    text: 'icon.ico'
                                    on_text: root.generate_pyinstaller_command()
                    
                    # 打包选项部分
                    SectionBox:
                        SectionLabel:
                            text: '打包选项'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        SettingCheckBox:
                            text: '单文件模式 (--onefile)'
                            id: p_onefile_box
                            
                            CheckBox:
                                id: p_onefile
                                active: True
                                on_active: root.generate_pyinstaller_command()
                        
                        SettingCheckBox:
                            text: '禁用控制台窗口 (--windowed)'
                            id: p_windowed_box
                            
                            CheckBox:
                                id: p_windowed
                                active: False
                                on_active: root.generate_pyinstaller_command()
                        
                        SettingCheckBox:
                            text: '清理临时文件 (--clean)'
                            id: p_clean_box
                            
                            CheckBox:
                                id: p_clean
                                active: True
                                on_active: root.generate_pyinstaller_command()
                        
                        SettingCheckBox:
                            text: '禁用UPX压缩 (--noupx)'
                            id: p_noupx_box
                            
                            CheckBox:
                                id: p_noupx
                                active: False
                                on_active: root.generate_pyinstaller_command()
                    
                    # 高级选项部分
                    SectionBox:
                        SectionLabel:
                            text: '高级选项'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '隐藏导入'
                                
                                SettingInput:
                                    id: p_hidden_import
                                    text: ''
                                    on_text: root.generate_pyinstaller_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '添加数据'
                                
                                SettingInput:
                                    id: p_add_data
                                    text: ''
                                    on_text: root.generate_pyinstaller_command()
                        
                        SettingRow:
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '添加二进制文件'
                                
                                SettingInput:
                                    id: p_add_binary
                                    text: ''
                                    on_text: root.generate_pyinstaller_command()
                            
                            BoxLayout:
                                orientation: 'vertical'
                                spacing: dp(5)
                                
                                SettingLabel:
                                    text: '额外选项'
                                
                                SettingInput:
                                    id: p_extra_options
                                    text: ''
                                    on_text: root.generate_pyinstaller_command()
                    
                    # 命令输出部分
                    SectionBox:
                        SectionLabel:
                            text: '生成的命令'
                        
                        Widget:
                            size_hint_y: None
                            height: dp(1)
                            canvas:
                                Color:
                                    rgba: 0.8, 0.8, 0.8, 1
                                Rectangle:
                                    pos: self.x, self.y
                                    size: self.width, dp(1)
                        
                        CommandTextInput:
                            id: p_command_text
                        
                        BoxLayout:
                            orientation: 'horizontal'
                            size_hint_y: None
                            height: dp(40)
                            spacing: dp(10)
                            
                            Widget:
                                size_hint_x: 1
                            
                            Button:
                                text: '复制命令'
                                size_hint_x: None
                                width: dp(120)
                                on_release: root.copy_command(p_command_text)
    
    FooterLabel:
        text: 'PyPack - 离线Python打包命令生成工具 | 版本 1.0.0'
''')

class PyPackRoot(BoxLayout):
    def __init__(self, **kwargs):
        super(PyPackRoot, self).__init__(**kwargs)
        Window.size = (950, 800)
        Window.minimum_width, Window.minimum_height = 800, 600
        
        # 初始化生成命令
        self.generate_nuitka_command()
        self.generate_pyinstaller_command()
    
    def generate_nuitka_command(self):
        main_file = self.ids.n_main_file.text or "main.py"
        output_dir = self.ids.n_output_dir.text
        app_name = self.ids.n_app_name.text
        icon = self.ids.n_icon.text
        standalone = self.ids.n_standalone.active
        onefile = self.ids.n_onefile.active
        windowed = self.ids.n_windowed.active
        follow_imports = self.ids.n_follow_imports.active
        include_plugins_for_qt = self.ids.n_include_plugins_for_qt.active
        include_module = self.ids.n_include_module.text
        include_package = self.ids.n_include_package.text
        include_data_files = self.ids.n_include_data_files.text
        extra_options = self.ids.n_extra_options.text
        
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
        self.ids.n_command_text.text = command
    
    def generate_pyinstaller_command(self):
        main_file = self.ids.p_main_file.text or "main.py"
        output_dir = self.ids.p_output_dir.text
        app_name = self.ids.p_app_name.text
        icon = self.ids.p_icon.text
        onefile = self.ids.p_onefile.active
        windowed = self.ids.p_windowed.active
        clean = self.ids.p_clean.active
        noupx = self.ids.p_noupx.active
        hidden_import = self.ids.p_hidden_import.text
        add_data = self.ids.p_add_data.text
        add_binary = self.ids.p_add_binary.text
        extra_options = self.ids.p_extra_options.text
        
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
        self.ids.p_command_text.text = command
    
    def copy_command(self, text_input):
        pyperclip.copy(text_input.text)
        self.show_message("已复制", "命令已复制到剪贴板")
    
    def preview_command(self, tool_type):
        if tool_type == "nuitka":
            command = self.ids.n_command_text.text
            preview_text = self.ids.n_preview_text
        else:
            return
        
        # 这里可以添加命令预览的逻辑
        preview = "命令预览：\n\n"
        preview += command
        preview += "\n\n执行此命令将会：\n"
        
        if tool_type == "nuitka":
            if self.ids.n_standalone.active:
                preview += "- 创建一个独立的可执行程序\n"
            if self.ids.n_onefile.active:
                preview += "- 将所有依赖打包成单个文件\n"
            if self.ids.n_windowed.active:
                preview += "- 禁用控制台窗口\n"
            
            output_dir = self.ids.n_output_dir.text
            if output_dir:
                preview += f"- 输出到 {output_dir} 目录\n"
            
            app_name = self.ids.n_app_name.text
            if app_name:
                preview += f"- 生成的可执行文件名为 {app_name}\n"
        
        preview_text.text = preview
    
    def show_message(self, title, message):
        content = BoxLayout(orientation='vertical', padding=10, spacing=10)
        content.add_widget(Label(text=message))
        
        button = Button(text="确定", size_hint=(None, None), size=(100, 40))
        content.add_widget(button)
        
        popup = Popup(title=title, content=content, size_hint=(None, None), size=(300, 200))
        button.bind(on_release=popup.dismiss)
        popup.open()

class PyPackApp(App):
    def build(self):
        return PyPackRoot()

if __name__ == '__main__':
    PyPackApp().run()