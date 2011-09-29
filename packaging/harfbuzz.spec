Name:       harfbuzz
Summary:    TO BE FILLED IN
Version:    0.7.0
Release:    1
Group:      TO_BE/FILLED_IN
License:    TO BE FILLED IN
Source0:    harfbuzz-%{version}.tar.gz
BuildRequires:  pkgconfig(freetype2)
BuildRequires:  which
BuildRequires:  ragel


%description


%package devel
Summary:    Development files for %{name}
Group:      Development/Libraries
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


