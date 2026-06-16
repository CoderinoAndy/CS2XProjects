import requests
def website_checker(website):
    if not website.startswith("https://") and not website.startswith("http://"):
        website = "https://" + website
    try:
        response = requests.get(website, timeout=5)
        print(f"URL checked: {website}")
        print(f"Final URL checked: {response.url}")
        print(f"Final status code: {response.status_code}")
        statuscode = response.status_code
        if 200 <= statuscode < 300:
            return f"{statuscode}: Website is functional."
        elif 300 <= statuscode < 400:
            return f"{statuscode}: website redirected."
        elif 400 <= statuscode < 500:
            return f"{statuscode}: Client side issue"
        elif 500 <= statuscode < 600:
            return f"{statuscode}: server side issue"
        else:
            return f"Unusual status code"
    except requests.exceptions.Timeout:
        return "Website timed out"
    except requests.exceptions.ConnectionError:
        return "Error: connection"
    except requests.exceptions.RequestException as error:
        return f"Error:, {error}"
        
while True:
    website = input("Website (enter & to quit): ").strip()
    if website == "&":
        break
    else:
        print(website_checker(website))