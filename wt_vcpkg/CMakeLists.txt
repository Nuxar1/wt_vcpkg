
# without these lines it causes an error "Target "wt_vcpkg" links to target "HPDF::HPDF" but the target was not found
find_package(unofficial-libharu CONFIG REQUIRED)
add_library(HPDF::HPDF ALIAS unofficial::libharu::hpdf)



find_package(Wt REQUIRED Wt HTTP)


add_executable (wt_vcpkg "wt_vcpkg.cpp" )

target_link_libraries(wt_vcpkg PRIVATE
	Wt::Wt
	Wt::HTTP
	Wt::Dbo
	Wt::DboPostgres
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET wt_vcpkg PROPERTY CXX_STANDARD 20)
endif()
