Name:           harfbuzz
Summary:        Hindi Reshaping Library
Version:        0.9.7
Release:        1
Group:          TO_BE/FILLED_IN
License:        TO BE FILLED IN
Source0:        %{name}-%{version}.tar.gz
BuildRequires:  pkgconfig(cairo)
BuildRequires:  pkgconfig(freetype2)
BuildRequires:  pkgconfig(glib-2.0)
BuildRequires:  pkgconfig(icu-i18n)
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
mkdir -p %{buildroot}/usr/share/license
cp %{_builddir}/%{buildsubdir}/COPYING %{buildroot}/usr/share/license/%{name}


%files
%defattr(-,root,root,-)
%{_libdir}/lib*.so.*
%{_bindir}/hb-ot-shape-closure
%{_bindir}/hb-shape
%{_bindir}/hb-view
/usr/share/license/%{name}


%files devel
%defattr(-,root,root,-)
%{_includedir}/*
%{_libdir}/lib*.so
%{_libdir}/pkgconfig/*


