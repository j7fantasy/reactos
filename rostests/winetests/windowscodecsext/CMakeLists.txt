
list(APPEND SOURCE
    transform.c
    testlist.c)

add_executable(windowscodecsext_winetest ${SOURCE})
set_module_type(windowscodecsext_winetest win32cui)
add_importlibs(windowscodecsext_winetest ole32 windowscodecsext msvcrt kernel32)
add_cd_file(TARGET windowscodecsext_winetest DESTINATION reactos/bin FOR all)
