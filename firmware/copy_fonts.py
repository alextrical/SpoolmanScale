import os
import shutil

Import("env")

def copy_custom_fonts(source, target, env):
    project_dir = env.subst("$PROJECT_DIR")
    lib_deps_dir = env.subst("$PROJECT_LIBDEPS_DIR")
    
    src = os.path.join(project_dir, "lib", "lvgl_fonts")
    dst = os.path.join(lib_deps_dir, env.subst("$PIOENV"), "lvgl", "src", "font")
    
    if not os.path.exists(src):
        print("copy_fonts: lib/lvgl_fonts/ not found, skipping")
        return
    
    if not os.path.exists(dst):
        print(f"copy_fonts: LVGL font dir not found: {dst}")
        return
    
    copied = 0
    for f in os.listdir(src):
        if f.startswith("lv_font_montserrat_") and f.endswith(".c"):
            shutil.copy2(os.path.join(src, f), os.path.join(dst, f))
            copied += 1
    
    print(f"copy_fonts: {copied} custom font files copied to LVGL")

env.AddPreAction("buildprog", copy_custom_fonts)
