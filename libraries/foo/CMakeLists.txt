set(libfoo_SRCS
        foo.h
        foo.cpp
        )

# Declare the library
add_library(libfoo STATIC
    ${libfoo_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(libfoo PUBLIC
        .
)
