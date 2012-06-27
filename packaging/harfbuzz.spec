Name:           harfbuzz
Summary:        Hindi Reshaping Library
Version:        0.9.0
Release:        1
Group:          TO_BE/FILLED_IN
License:        TO BE FILLED IN
Source0:        %{name}-%{version}.tar.gz
BuildRequires:  pkgconfig(freetype2)
BuildRequires:  which
BuildRequires:  ragel


%description
Hindi Reshaping Library


%package devel
Summary:    TO BE FILLED IN
Requires:   %{name} = %{version}-%{release}


%description devel
Development files for %{name}


%prep
%setup -q 


%build
%autogen
%configure

make %{?jobs:-j%jobs}


%install
rm -rf %{buildroot}
%make_install


%files
%defattr(-,root,root,-)
%{_libdir}/lib*.so.*


%files devel
%defattr(-,root,root,-)
%{_includedir}/*
%{_libdir}/lib*.so
%{_libdir}/pkgconfig/*


