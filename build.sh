cd $TRAVIS_BUILD_DIR/docs
bundle install
bundle exec middleman build
