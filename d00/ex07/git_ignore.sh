find . -type f | git check-ignore --stdin | grep -E -o "([^\/]+$)"
