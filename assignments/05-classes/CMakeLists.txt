project(classes_library)

add_subdirectory(05-classes "invoice_detail.cpp" "invoice_detail.h" )
add_executable(classes_exe "main.cpp" "invoice_detail.cpp")