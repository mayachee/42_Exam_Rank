## step 1:
private attributes:
    std::string name;
    std::string title;

## step 2:
create getName, getTitle with reference
    std::string const & Warlock::getName() const;
    std::string const & Warlock::getTitle() const;

## step 3:
create the setter
    void Warlock::setTitle(std::string const & title);

## step 4:
create the constructor, copie construchtor,
    Warlock::Warlock()
    Warlock::Warlock(Warlock const & obj)
    Warlock & Warlock::operator=(Warlock const & ope)
    Warlock::Warlock(const std::string & name, const std::string & title) : name(name), title(title)

## step 5:
create deconstructor
    Warlock::~Warlock()

## step 6:
create a introduce
    void introduce() const;