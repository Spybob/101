find . -name "*.sh" | sed "s/...$//" | rev | cut -d / -f 1 | rev
