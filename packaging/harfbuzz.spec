Name:           harfbuzz
Summary:     Font Reshaping Library
Version:        0.9.40
Release:        1
Group:          TO_BE/FILLED_IN
License:        MIT
Source0:        %{name}-%{version}.tar.gz
#BuildRequires:  pkgconfig(cairo)
BuildRequires:  pkgconfig(freetype2)
BuildRequires:  pkgconfig(glib-2.0)
BuildRequires:  pkgconfig(icu-i18n)
BuildRequires:  which
BuildRequires:  ragel


%description
Font Reshaping Library


%package devel
Summary:    TO BE FILLED IN
Requires:   %{name} = %{version}-%{release}


%description devel
Development files for %{name}


%prep
%setup -q 


%build
%autogen
export CXXFLAGS+=" -fdata-sections -ffunction-sections -Wl,--gc-sections"
export CFLAGS+=" -fdata-sections -ffunction-sections -Wl,--gc-sections"
%configure

make %{?jobs:-j%jobs}


%install
rm -rf %{buildroot}
%make_install
mkdir -p %{buildroot}/usr/share/license
cp %{_builddir}/%{buildsubdir}/COPYING %{buildroot}/usr/share/license/%{name}


%files
%defattr(-,root,root,-)
%{_libdir}/lib*.so.*
#%{_bindir}/hb-ot-shape-closure
#%{_bindir}/hb-shape
#%{_bindir}/hb-view
%manifest %{name}.manifest
/usr/share/license/%{name}


%files devel
%defattr(-,root,root,-)
%{_includedir}/*
%{_libdir}/lib*.so
%{_libdir}/pkgconfig/*


